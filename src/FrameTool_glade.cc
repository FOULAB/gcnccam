// generated 2007/9/6 18:49:33 CEST by abegeman@sonyx.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/abegeman/projects/c_projekt/gxcam/gxcam.glade
// for gtk 2.8.20 and gtkmm 2.8.8
//
// Please modify the corresponding derived classes in ./src/FrameTool.cc


#if defined __GNUC__ && __GNUC__ < 3
#error This program will crash if compiled with g++ 2.x
// see the dynamic_cast bug in the gtkmm FAQ
#endif //
#include "config.h"
/*
 * Standard gettext macros.
 */
#ifdef ENABLE_NLS
#  include <libintl.h>
#  undef _
#  define _(String) dgettext (GETTEXT_PACKAGE, String)
#  ifdef gettext_noop
#    define N_(String) gettext_noop (String)
#  else
#    define N_(String) (String)
#  endif
#else
#  define textdomain(String) (String)
#  define gettext(String) (String)
#  define dgettext(Domain,Message) (Message)
#  define dcgettext(Domain,Message,Type) (Message)
#  define bindtextdomain(Domain,Directory) (Domain)
#  define _(String) (String)
#  define N_(String) (String)
#endif
#include <gtkmmconfig.h>
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
#include <sigc++/compatibility.h>
#define GMM_GTKMM_22_24(a,b) b
#else //gtkmm 2.2
#define GMM_GTKMM_22_24(a,b) a
#endif //
#include "FrameTool_glade.hh"

FrameTool_glade::FrameTool_glade(GlademmData *gmm_data
)
{  FrameTool = this;
   label11 = Gtk::manage(new class Gtk::Label(_("Tool Number: ")));
   entry_tool_number = Gtk::manage(new class Gtk::Entry());
   hbox1 = Gtk::manage(new class Gtk::HBox(false, 0));
   label14 = Gtk::manage(new class Gtk::Label(_("Tool  Length:")));
   entry_tool_len = Gtk::manage(new class Gtk::Entry());
   hbox2 = Gtk::manage(new class Gtk::HBox(false, 0));
   label12 = Gtk::manage(new class Gtk::Label(_("Tool Diameter: ")));
   entry_tool_dia = Gtk::manage(new class Gtk::Entry());
   hbox3 = Gtk::manage(new class Gtk::HBox(false, 0));
   label13 = Gtk::manage(new class Gtk::Label(_("Comment: ")));
   entry_tool_comment = Gtk::manage(new class Gtk::Entry());
   hbox4 = Gtk::manage(new class Gtk::HBox(false, 0));
   vbox3 = Gtk::manage(new class Gtk::VBox(false, 4));
   button_ok = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-ok")));
   button_cancel = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-cancel")));
   vbox5 = Gtk::manage(new class Gtk::VBox(false, 0));
   hbox17 = Gtk::manage(new class Gtk::HBox(false, 0));
   label11->set_size_request(100,-1);
   label11->set_alignment(0.5,0.5);
   label11->set_padding(0,0);
   label11->set_justify(Gtk::JUSTIFY_LEFT);
   label11->set_line_wrap(false);
   label11->set_use_markup(false);
   label11->set_selectable(false);
   entry_tool_number->set_flags(Gtk::CAN_FOCUS);
   entry_tool_number->set_visibility(true);
   entry_tool_number->set_editable(true);
   entry_tool_number->set_max_length(2);
   entry_tool_number->set_text(_(""));
   entry_tool_number->set_has_frame(true);
   entry_tool_number->set_activates_default(false);
   hbox1->pack_start(*label11, Gtk::PACK_SHRINK, 0);
   hbox1->pack_start(*entry_tool_number, Gtk::PACK_SHRINK, 0);
   label14->set_size_request(100,-1);
   label14->set_alignment(0.5,0.5);
   label14->set_padding(0,0);
   label14->set_justify(Gtk::JUSTIFY_LEFT);
   label14->set_line_wrap(false);
   label14->set_use_markup(false);
   label14->set_selectable(false);
   entry_tool_len->set_flags(Gtk::CAN_FOCUS);
   entry_tool_len->set_visibility(true);
   entry_tool_len->set_editable(true);
   entry_tool_len->set_max_length(0);
   entry_tool_len->set_text(_(""));
   entry_tool_len->set_has_frame(true);
   entry_tool_len->set_activates_default(false);
   hbox2->pack_start(*label14, Gtk::PACK_SHRINK, 0);
   hbox2->pack_start(*entry_tool_len, Gtk::PACK_SHRINK, 0);
   label12->set_size_request(100,-1);
   label12->set_alignment(0.5,0.5);
   label12->set_padding(0,0);
   label12->set_justify(Gtk::JUSTIFY_LEFT);
   label12->set_line_wrap(false);
   label12->set_use_markup(false);
   label12->set_selectable(false);
   entry_tool_dia->set_flags(Gtk::CAN_FOCUS);
   entry_tool_dia->set_visibility(true);
   entry_tool_dia->set_editable(true);
   entry_tool_dia->set_max_length(0);
   entry_tool_dia->set_text(_(""));
   entry_tool_dia->set_has_frame(true);
   entry_tool_dia->set_activates_default(false);
   hbox3->pack_start(*label12, Gtk::PACK_SHRINK, 0);
   hbox3->pack_start(*entry_tool_dia, Gtk::PACK_SHRINK, 0);
   label13->set_size_request(100,-1);
   label13->set_alignment(0.5,0.5);
   label13->set_padding(0,0);
   label13->set_justify(Gtk::JUSTIFY_LEFT);
   label13->set_line_wrap(false);
   label13->set_use_markup(false);
   label13->set_selectable(false);
   entry_tool_comment->set_flags(Gtk::CAN_FOCUS);
   entry_tool_comment->set_visibility(true);
   entry_tool_comment->set_editable(true);
   entry_tool_comment->set_max_length(255);
   entry_tool_comment->set_text(_(""));
   entry_tool_comment->set_has_frame(true);
   entry_tool_comment->set_activates_default(true);
   hbox4->pack_start(*label13, Gtk::PACK_SHRINK, 0);
   hbox4->pack_start(*entry_tool_comment);
   vbox3->pack_start(*hbox1, Gtk::PACK_SHRINK, 5);
   vbox3->pack_start(*hbox2, Gtk::PACK_SHRINK, 5);
   vbox3->pack_start(*hbox3, Gtk::PACK_SHRINK, 5);
   vbox3->pack_start(*hbox4, Gtk::PACK_SHRINK, 5);
   button_ok->set_flags(Gtk::CAN_FOCUS);
   button_ok->set_border_width(2);
   button_ok->set_relief(Gtk::RELIEF_NORMAL);
   button_cancel->set_flags(Gtk::CAN_FOCUS);
   button_cancel->set_border_width(2);
   button_cancel->set_relief(Gtk::RELIEF_NORMAL);
   vbox5->set_border_width(10);
   vbox5->pack_start(*button_ok, Gtk::PACK_SHRINK, 0);
   vbox5->pack_start(*button_cancel, Gtk::PACK_SHRINK, 0);
   hbox17->pack_start(*vbox3);
   hbox17->pack_start(*vbox5, Gtk::PACK_SHRINK, 0);
   FrameTool->set_shadow_type(Gtk::SHADOW_NONE);
   FrameTool->set_label_align(0,0.5);
   FrameTool->add(*hbox17);
   label11->show();
   entry_tool_number->show();
   hbox1->show();
   label14->show();
   entry_tool_len->show();
   hbox2->show();
   label12->show();
   entry_tool_dia->show();
   hbox3->show();
   label13->show();
   entry_tool_comment->show();
   hbox4->show();
   vbox3->show();
   button_ok->show();
   button_cancel->show();
   vbox5->show();
   hbox17->show();
   FrameTool->show();
   entry_tool_number->signal_changed().connect(SigC::slot(*this, &FrameTool_glade::on_entry_tool_number_changed), false);
   button_ok->signal_clicked().connect(SigC::slot(*this, &FrameTool_glade::on_button_ok_clicked), false);
   button_cancel->signal_clicked().connect(SigC::slot(*this, &FrameTool_glade::on_button_cancel_clicked), false);
}

FrameTool_glade::~FrameTool_glade()
{  
}