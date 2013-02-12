// This may look like C code, but it's really -*- C++ -*-
/*
 * Copyright (C) 2012 Emweb bvba
 *
 * See the LICENSE file for terms of use.
 */

#ifndef TOPIC_WIDGET_H_
#define TOPIC_WIDGET_H_

#include <Wt/WContainerWidget>
#include <Wt/WMenu>
#include <string>

class TopicWidget : public Wt::WContainerWidget
{
public:
  TopicWidget();

  virtual void populateSubMenu(Wt::WMenu *menu);

  // Inserts the classname in the parent, with a link to the
  // documentation
  void topic(const std::string &classname,
	     WContainerWidget *parent) const;
  void topic(const std::string &classname1,
	     const std::string &classname2,
	     WContainerWidget *parent) const;
  void topic(const std::string &classname1,
	     const std::string &classname2,
	     const std::string &classname3,
	     WContainerWidget *parent) const;
  void topic(const std::string &classname1,
	     const std::string &classname2,
	     const std::string &classname3,
	     const std::string &classname4,
	     WContainerWidget *parent) const;

  static Wt::WString reindent(const Wt::WString& text);

protected:
  static Wt::WText *addText(const Wt::WString& text,
			    Wt::WContainerWidget *parent = 0);

private:
  std::string docAnchor(const std::string &classname) const;
  std::string title(const std::string &classname) const;
  std::string escape(const std::string &name) const;
};

#endif // TOPIC_WIDGET_H_