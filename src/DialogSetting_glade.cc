// generated 2008/4/10 11:42:05 CEST by abegeman@sonyx.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/abegeman/projects/c_projekt/gcnccam/gcnccam.glade
// for gtk 2.8.20 and gtkmm 2.8.8
//
// Please modify the corresponding derived classes in ./src/DialogSetting.cc


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
#include "DialogSetting_glade.hh"
#include <gdk/gdkkeysyms.h>
#include <gtkmm/accelgroup.h>

DialogSetting_glade::DialogSetting_glade(
)
{  DialogSetting = this;
   gmm_data = new GlademmData(get_accel_group());
   cancelbutton1 = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-cancel")));
   okbutton1 = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-ok")));
   label42 = Gtk::manage(new class Gtk::Label(_("Units:")));
   combo_units = Gtk::manage(new class Gtk::ComboBox());
   hbox25 = Gtk::manage(new class Gtk::HBox(false, 0));
   label43 = Gtk::manage(new class Gtk::Label(_("Length:")));
   label_unit_length = Gtk::manage(new class Gtk::Label(_("label_unit_length")));
   hbox26 = Gtk::manage(new class Gtk::HBox(false, 0));
   label45 = Gtk::manage(new class Gtk::Label(_("Speed:")));
   label_unit_speed = Gtk::manage(new class Gtk::Label(_("label_unit_speed")));
   hbox27 = Gtk::manage(new class Gtk::HBox(false, 0));
   vbox10 = Gtk::manage(new class Gtk::VBox(false, 0));
   label41 = Gtk::manage(new class Gtk::Label(_("Units")));
   label60 = Gtk::manage(new class Gtk::Label(_("Add Tool Change:")));
   check_tool_change = Gtk::manage(new class Gtk::CheckButton(_("")));
   hbox36 = Gtk::manage(new class Gtk::HBox(false, 0));
   label55 = Gtk::manage(new class Gtk::Label(_("Tool Change")));
   label56 = Gtk::manage(new class Gtk::Label(_("X:")));
   entry_tool_change_x = Gtk::manage(new class Gtk::Entry());
   label57 = Gtk::manage(new class Gtk::Label(_("Y:")));
   entry_tool_change_y = Gtk::manage(new class Gtk::Entry());
   label58 = Gtk::manage(new class Gtk::Label(_("Z:")));
   entry_tool_change_z = Gtk::manage(new class Gtk::Entry());
   label_tool_change_pos_unit = Gtk::manage(new class Gtk::Label(_("label")));
   hbox34 = Gtk::manage(new class Gtk::HBox(false, 0));
   label51 = Gtk::manage(new class Gtk::Label(_("Sensor actice:")));
   check_tool_sensor = Gtk::manage(new class Gtk::CheckButton(_("")));
   hbox29 = Gtk::manage(new class Gtk::HBox(false, 0));
   label47 = Gtk::manage(new class Gtk::Label(_("Tool Sensor")));
   label48 = Gtk::manage(new class Gtk::Label(_("X:")));
   entry_tool_sensor_x = Gtk::manage(new class Gtk::Entry());
   label49 = Gtk::manage(new class Gtk::Label(_("Y:")));
   entry_tool_sensor_y = Gtk::manage(new class Gtk::Entry());
   label50 = Gtk::manage(new class Gtk::Label(_("Z:")));
   entry_tool_sensor_z = Gtk::manage(new class Gtk::Entry());
   label_tool_sensor_pos_unit = Gtk::manage(new class Gtk::Label(_("label")));
   hbox28 = Gtk::manage(new class Gtk::HBox(false, 0));
   label54 = Gtk::manage(new class Gtk::Label(_("Sensor Height:")));
   entry_tool_sensor_height = Gtk::manage(new class Gtk::Entry());
   label_tool_sensor_height_unit = Gtk::manage(new class Gtk::Label(_("label")));
   hbox33 = Gtk::manage(new class Gtk::HBox(false, 0));
   label52 = Gtk::manage(new class Gtk::Label(_("TouchOff ZPos:")));
   entry_touchoff_zpos = Gtk::manage(new class Gtk::Entry());
   label_touchoff_unit = Gtk::manage(new class Gtk::Label(_("label")));
   hbox30 = Gtk::manage(new class Gtk::HBox(false, 0));
   label53 = Gtk::manage(new class Gtk::Label(_("Probe Feed Rate:")));
   entry_probe_feed_rate = Gtk::manage(new class Gtk::Entry());
   hbox32 = Gtk::manage(new class Gtk::HBox(false, 0));
   label_probe_feed_rate_unit = Gtk::manage(new class Gtk::Label(_("label")));
   hbox31 = Gtk::manage(new class Gtk::HBox(false, 0));
   vbox8 = Gtk::manage(new class Gtk::VBox(false, 0));
   label34 = Gtk::manage(new class Gtk::Label(_("Tool Length Sensor")));
   label61 = Gtk::manage(new class Gtk::Label(_("Add Exit:")));
   check_add_exit_pos = Gtk::manage(new class Gtk::CheckButton(_("")));
   hbox37 = Gtk::manage(new class Gtk::HBox(false, 0));
   label62 = Gtk::manage(new class Gtk::Label(_("Exit Position")));
   label63 = Gtk::manage(new class Gtk::Label(_("X:")));
   entry_exit_pos_x = Gtk::manage(new class Gtk::Entry());
   label64 = Gtk::manage(new class Gtk::Label(_("Y:")));
   entry_exit_pos_y = Gtk::manage(new class Gtk::Entry());
   label65 = Gtk::manage(new class Gtk::Label(_("Z:")));
   entry_exit_pos_z = Gtk::manage(new class Gtk::Entry());
   label_exit_pos_unit = Gtk::manage(new class Gtk::Label(_("label")));
   hbox38 = Gtk::manage(new class Gtk::HBox(false, 0));
   vbox9 = Gtk::manage(new class Gtk::VBox(false, 0));
   label35 = Gtk::manage(new class Gtk::Label(_("Misc")));
   notebook2 = Gtk::manage(new class Gtk::Notebook());
   cancelbutton1->set_flags(Gtk::CAN_FOCUS);
   cancelbutton1->set_flags(Gtk::CAN_DEFAULT);
   cancelbutton1->set_relief(Gtk::RELIEF_NORMAL);
   okbutton1->set_flags(Gtk::CAN_FOCUS);
   okbutton1->set_flags(Gtk::CAN_DEFAULT);
   okbutton1->set_relief(Gtk::RELIEF_NORMAL);
   DialogSetting->get_action_area()->property_layout_style().set_value(Gtk::BUTTONBOX_END);
   label42->set_size_request(100,-1);
   label42->set_alignment(0.5,0.5);
   label42->set_padding(0,0);
   label42->set_justify(Gtk::JUSTIFY_LEFT);
   label42->set_line_wrap(true);
   label42->set_use_markup(false);
   label42->set_selectable(false);
   hbox25->pack_start(*label42, Gtk::PACK_SHRINK, 0);
   hbox25->pack_start(*combo_units, Gtk::PACK_SHRINK, 0);
   label43->set_size_request(100,-1);
   label43->set_alignment(0.5,0.5);
   label43->set_padding(0,0);
   label43->set_justify(Gtk::JUSTIFY_LEFT);
   label43->set_line_wrap(true);
   label43->set_use_markup(false);
   label43->set_selectable(false);
   label_unit_length->set_sensitive(false);
   label_unit_length->set_alignment(0.5,0.5);
   label_unit_length->set_padding(0,0);
   label_unit_length->set_justify(Gtk::JUSTIFY_LEFT);
   label_unit_length->set_line_wrap(false);
   label_unit_length->set_use_markup(false);
   label_unit_length->set_selectable(false);
   hbox26->pack_start(*label43, Gtk::PACK_SHRINK, 0);
   hbox26->pack_start(*label_unit_length, Gtk::PACK_SHRINK, 0);
   label45->set_size_request(100,-1);
   label45->set_alignment(0.5,0.5);
   label45->set_padding(0,0);
   label45->set_justify(Gtk::JUSTIFY_LEFT);
   label45->set_line_wrap(true);
   label45->set_use_markup(false);
   label45->set_selectable(false);
   label_unit_speed->set_alignment(0.5,0.5);
   label_unit_speed->set_padding(0,0);
   label_unit_speed->set_justify(Gtk::JUSTIFY_LEFT);
   label_unit_speed->set_line_wrap(true);
   label_unit_speed->set_use_markup(false);
   label_unit_speed->set_selectable(false);
   hbox27->pack_start(*label45, Gtk::PACK_SHRINK, 0);
   hbox27->pack_start(*label_unit_speed, Gtk::PACK_SHRINK, 0);
   vbox10->pack_start(*hbox25, Gtk::PACK_SHRINK, 5);
   vbox10->pack_start(*hbox26, Gtk::PACK_SHRINK, 5);
   vbox10->pack_start(*hbox27, Gtk::PACK_SHRINK, 5);
   label41->set_alignment(0.5,0.5);
   label41->set_padding(0,0);
   label41->set_justify(Gtk::JUSTIFY_LEFT);
   label41->set_line_wrap(false);
   label41->set_use_markup(false);
   label41->set_selectable(false);
   label60->set_size_request(120,-1);
   label60->set_alignment(0.5,0.5);
   label60->set_padding(0,0);
   label60->set_justify(Gtk::JUSTIFY_LEFT);
   label60->set_line_wrap(true);
   label60->set_use_markup(false);
   label60->set_selectable(false);
   check_tool_change->set_flags(Gtk::CAN_FOCUS);
   _tooltips.set_tip(*check_tool_change, _("Tool Length Sensor active or not"), "");
   check_tool_change->set_relief(Gtk::RELIEF_NORMAL);
   check_tool_change->set_mode(true);
   check_tool_change->set_active(false);
   hbox36->pack_start(*label60, Gtk::PACK_SHRINK, 0);
   hbox36->pack_start(*check_tool_change, Gtk::PACK_SHRINK, 0);
   label55->set_size_request(120,-1);
   label55->set_alignment(0.5,0.5);
   label55->set_padding(0,0);
   label55->set_justify(Gtk::JUSTIFY_LEFT);
   label55->set_line_wrap(true);
   label55->set_use_markup(false);
   label55->set_selectable(false);
   label56->set_alignment(0.5,0.5);
   label56->set_padding(0,0);
   label56->set_justify(Gtk::JUSTIFY_LEFT);
   label56->set_line_wrap(false);
   label56->set_use_markup(false);
   label56->set_selectable(false);
   entry_tool_change_x->set_flags(Gtk::CAN_FOCUS);
   entry_tool_change_x->set_visibility(true);
   entry_tool_change_x->set_editable(true);
   entry_tool_change_x->set_max_length(0);
   entry_tool_change_x->set_text(_(""));
   entry_tool_change_x->set_has_frame(true);
   entry_tool_change_x->set_activates_default(false);
   entry_tool_change_x->set_width_chars(8);
   label57->set_alignment(0.5,0.5);
   label57->set_padding(0,0);
   label57->set_justify(Gtk::JUSTIFY_LEFT);
   label57->set_line_wrap(false);
   label57->set_use_markup(false);
   label57->set_selectable(false);
   entry_tool_change_y->set_flags(Gtk::CAN_FOCUS);
   entry_tool_change_y->set_visibility(true);
   entry_tool_change_y->set_editable(true);
   entry_tool_change_y->set_max_length(0);
   entry_tool_change_y->set_text(_(""));
   entry_tool_change_y->set_has_frame(true);
   entry_tool_change_y->set_activates_default(false);
   entry_tool_change_y->set_width_chars(8);
   label58->set_alignment(0.5,0.5);
   label58->set_padding(0,0);
   label58->set_justify(Gtk::JUSTIFY_LEFT);
   label58->set_line_wrap(false);
   label58->set_use_markup(false);
   label58->set_selectable(false);
   entry_tool_change_z->set_flags(Gtk::CAN_FOCUS);
   entry_tool_change_z->set_visibility(true);
   entry_tool_change_z->set_editable(true);
   entry_tool_change_z->set_max_length(0);
   entry_tool_change_z->set_text(_(""));
   entry_tool_change_z->set_has_frame(true);
   entry_tool_change_z->set_activates_default(false);
   entry_tool_change_z->set_width_chars(8);
   label_tool_change_pos_unit->set_alignment(0.5,0.5);
   label_tool_change_pos_unit->set_padding(0,0);
   label_tool_change_pos_unit->set_justify(Gtk::JUSTIFY_LEFT);
   label_tool_change_pos_unit->set_line_wrap(false);
   label_tool_change_pos_unit->set_use_markup(false);
   label_tool_change_pos_unit->set_selectable(false);
   hbox34->pack_start(*label55, Gtk::PACK_SHRINK, 0);
   hbox34->pack_start(*label56, Gtk::PACK_SHRINK, 1);
   hbox34->pack_start(*entry_tool_change_x, Gtk::PACK_SHRINK, 0);
   hbox34->pack_start(*label57, Gtk::PACK_SHRINK, 1);
   hbox34->pack_start(*entry_tool_change_y, Gtk::PACK_SHRINK, 0);
   hbox34->pack_start(*label58, Gtk::PACK_SHRINK, 1);
   hbox34->pack_start(*entry_tool_change_z, Gtk::PACK_SHRINK, 0);
   hbox34->pack_start(*label_tool_change_pos_unit, Gtk::PACK_SHRINK, 1);
   label51->set_size_request(120,-1);
   label51->set_alignment(0.5,0.5);
   label51->set_padding(0,0);
   label51->set_justify(Gtk::JUSTIFY_LEFT);
   label51->set_line_wrap(true);
   label51->set_use_markup(false);
   label51->set_selectable(false);
   check_tool_sensor->set_flags(Gtk::CAN_FOCUS);
   _tooltips.set_tip(*check_tool_sensor, _("Tool Length Sensor active or not"), "");
   check_tool_sensor->set_relief(Gtk::RELIEF_NORMAL);
   check_tool_sensor->set_mode(true);
   check_tool_sensor->set_active(false);
   hbox29->pack_start(*label51, Gtk::PACK_SHRINK, 0);
   hbox29->pack_start(*check_tool_sensor, Gtk::PACK_SHRINK, 0);
   label47->set_size_request(120,-1);
   label47->set_alignment(0.5,0.5);
   label47->set_padding(0,0);
   label47->set_justify(Gtk::JUSTIFY_LEFT);
   label47->set_line_wrap(true);
   label47->set_use_markup(false);
   label47->set_selectable(false);
   label48->set_alignment(0.5,0.5);
   label48->set_padding(0,0);
   label48->set_justify(Gtk::JUSTIFY_LEFT);
   label48->set_line_wrap(false);
   label48->set_use_markup(false);
   label48->set_selectable(false);
   entry_tool_sensor_x->set_flags(Gtk::CAN_FOCUS);
   entry_tool_sensor_x->set_visibility(true);
   entry_tool_sensor_x->set_editable(true);
   entry_tool_sensor_x->set_max_length(0);
   entry_tool_sensor_x->set_text(_(""));
   entry_tool_sensor_x->set_has_frame(true);
   entry_tool_sensor_x->set_activates_default(false);
   entry_tool_sensor_x->set_width_chars(8);
   label49->set_alignment(0.5,0.5);
   label49->set_padding(0,0);
   label49->set_justify(Gtk::JUSTIFY_LEFT);
   label49->set_line_wrap(false);
   label49->set_use_markup(false);
   label49->set_selectable(false);
   entry_tool_sensor_y->set_flags(Gtk::CAN_FOCUS);
   entry_tool_sensor_y->set_visibility(true);
   entry_tool_sensor_y->set_editable(true);
   entry_tool_sensor_y->set_max_length(0);
   entry_tool_sensor_y->set_text(_(""));
   entry_tool_sensor_y->set_has_frame(true);
   entry_tool_sensor_y->set_activates_default(false);
   entry_tool_sensor_y->set_width_chars(8);
   label50->set_alignment(0.5,0.5);
   label50->set_padding(0,0);
   label50->set_justify(Gtk::JUSTIFY_LEFT);
   label50->set_line_wrap(false);
   label50->set_use_markup(false);
   label50->set_selectable(false);
   entry_tool_sensor_z->set_flags(Gtk::CAN_FOCUS);
   entry_tool_sensor_z->set_visibility(true);
   entry_tool_sensor_z->set_editable(true);
   entry_tool_sensor_z->set_max_length(0);
   entry_tool_sensor_z->set_text(_(""));
   entry_tool_sensor_z->set_has_frame(true);
   entry_tool_sensor_z->set_activates_default(false);
   entry_tool_sensor_z->set_width_chars(8);
   label_tool_sensor_pos_unit->set_alignment(0.5,0.5);
   label_tool_sensor_pos_unit->set_padding(0,0);
   label_tool_sensor_pos_unit->set_justify(Gtk::JUSTIFY_LEFT);
   label_tool_sensor_pos_unit->set_line_wrap(false);
   label_tool_sensor_pos_unit->set_use_markup(false);
   label_tool_sensor_pos_unit->set_selectable(false);
   hbox28->pack_start(*label47, Gtk::PACK_SHRINK, 0);
   hbox28->pack_start(*label48, Gtk::PACK_SHRINK, 1);
   hbox28->pack_start(*entry_tool_sensor_x, Gtk::PACK_SHRINK, 0);
   hbox28->pack_start(*label49, Gtk::PACK_SHRINK, 1);
   hbox28->pack_start(*entry_tool_sensor_y, Gtk::PACK_SHRINK, 0);
   hbox28->pack_start(*label50, Gtk::PACK_SHRINK, 1);
   hbox28->pack_start(*entry_tool_sensor_z, Gtk::PACK_SHRINK, 0);
   hbox28->pack_start(*label_tool_sensor_pos_unit, Gtk::PACK_SHRINK, 1);
   label54->set_size_request(120,-1);
   label54->set_alignment(0.5,0.5);
   label54->set_padding(0,0);
   label54->set_justify(Gtk::JUSTIFY_LEFT);
   label54->set_line_wrap(true);
   label54->set_use_markup(false);
   label54->set_selectable(false);
   entry_tool_sensor_height->set_flags(Gtk::CAN_FOCUS);
   entry_tool_sensor_height->set_visibility(true);
   entry_tool_sensor_height->set_editable(true);
   entry_tool_sensor_height->set_max_length(0);
   entry_tool_sensor_height->set_text(_(""));
   entry_tool_sensor_height->set_has_frame(true);
   entry_tool_sensor_height->set_activates_default(false);
   entry_tool_sensor_height->set_width_chars(8);
   label_tool_sensor_height_unit->set_alignment(0.5,0.5);
   label_tool_sensor_height_unit->set_padding(0,0);
   label_tool_sensor_height_unit->set_justify(Gtk::JUSTIFY_LEFT);
   label_tool_sensor_height_unit->set_line_wrap(false);
   label_tool_sensor_height_unit->set_use_markup(false);
   label_tool_sensor_height_unit->set_selectable(false);
   hbox33->pack_start(*label54, Gtk::PACK_SHRINK, 0);
   hbox33->pack_start(*entry_tool_sensor_height, Gtk::PACK_SHRINK, 0);
   hbox33->pack_start(*label_tool_sensor_height_unit, Gtk::PACK_SHRINK, 1);
   label52->set_size_request(120,-1);
   label52->set_alignment(0.5,0.5);
   label52->set_padding(0,0);
   label52->set_justify(Gtk::JUSTIFY_LEFT);
   label52->set_line_wrap(true);
   label52->set_use_markup(false);
   label52->set_selectable(false);
   entry_touchoff_zpos->set_flags(Gtk::CAN_FOCUS);
   entry_touchoff_zpos->set_visibility(true);
   entry_touchoff_zpos->set_editable(true);
   entry_touchoff_zpos->set_max_length(0);
   entry_touchoff_zpos->set_text(_(""));
   entry_touchoff_zpos->set_has_frame(true);
   entry_touchoff_zpos->set_activates_default(false);
   entry_touchoff_zpos->set_width_chars(8);
   label_touchoff_unit->set_alignment(0.5,0.5);
   label_touchoff_unit->set_padding(0,0);
   label_touchoff_unit->set_justify(Gtk::JUSTIFY_LEFT);
   label_touchoff_unit->set_line_wrap(false);
   label_touchoff_unit->set_use_markup(false);
   label_touchoff_unit->set_selectable(false);
   hbox30->pack_start(*label52, Gtk::PACK_SHRINK, 0);
   hbox30->pack_start(*entry_touchoff_zpos, Gtk::PACK_SHRINK, 0);
   hbox30->pack_start(*label_touchoff_unit, Gtk::PACK_SHRINK, 1);
   label53->set_size_request(120,-1);
   label53->set_alignment(0.5,0.5);
   label53->set_padding(0,0);
   label53->set_justify(Gtk::JUSTIFY_LEFT);
   label53->set_line_wrap(true);
   label53->set_use_markup(false);
   label53->set_selectable(false);
   entry_probe_feed_rate->set_flags(Gtk::CAN_FOCUS);
   entry_probe_feed_rate->set_visibility(true);
   entry_probe_feed_rate->set_editable(true);
   entry_probe_feed_rate->set_max_length(0);
   entry_probe_feed_rate->set_text(_(""));
   entry_probe_feed_rate->set_has_frame(true);
   entry_probe_feed_rate->set_activates_default(false);
   entry_probe_feed_rate->set_width_chars(8);
   hbox32->pack_start(*entry_probe_feed_rate, Gtk::PACK_SHRINK, 0);
   label_probe_feed_rate_unit->set_alignment(0.5,0.5);
   label_probe_feed_rate_unit->set_padding(0,0);
   label_probe_feed_rate_unit->set_justify(Gtk::JUSTIFY_LEFT);
   label_probe_feed_rate_unit->set_line_wrap(false);
   label_probe_feed_rate_unit->set_use_markup(false);
   label_probe_feed_rate_unit->set_selectable(false);
   hbox31->pack_start(*label53, Gtk::PACK_SHRINK, 0);
   hbox31->pack_start(*hbox32, Gtk::PACK_SHRINK, 0);
   hbox31->pack_start(*label_probe_feed_rate_unit, Gtk::PACK_SHRINK, 1);
   vbox8->pack_start(*hbox36);
   vbox8->pack_start(*hbox34, Gtk::PACK_EXPAND_WIDGET, 5);
   vbox8->pack_start(*hbox29, Gtk::PACK_SHRINK, 5);
   vbox8->pack_start(*hbox28, Gtk::PACK_SHRINK, 5);
   vbox8->pack_start(*hbox33);
   vbox8->pack_start(*hbox30, Gtk::PACK_SHRINK, 5);
   vbox8->pack_start(*hbox31, Gtk::PACK_SHRINK, 5);
   label34->set_alignment(0.5,0.5);
   label34->set_padding(0,0);
   label34->set_justify(Gtk::JUSTIFY_LEFT);
   label34->set_line_wrap(false);
   label34->set_use_markup(false);
   label34->set_selectable(false);
   label61->set_size_request(120,-1);
   label61->set_alignment(0.5,0.5);
   label61->set_padding(0,0);
   label61->set_justify(Gtk::JUSTIFY_LEFT);
   label61->set_line_wrap(true);
   label61->set_use_markup(false);
   label61->set_selectable(false);
   check_add_exit_pos->set_flags(Gtk::CAN_FOCUS);
   _tooltips.set_tip(*check_add_exit_pos, _("Tool Length Sensor active or not"), "");
   check_add_exit_pos->set_relief(Gtk::RELIEF_NORMAL);
   check_add_exit_pos->set_mode(true);
   check_add_exit_pos->set_active(false);
   hbox37->pack_start(*label61, Gtk::PACK_SHRINK, 0);
   hbox37->pack_start(*check_add_exit_pos, Gtk::PACK_SHRINK, 0);
   label62->set_size_request(120,-1);
   label62->set_alignment(0.5,0.5);
   label62->set_padding(0,0);
   label62->set_justify(Gtk::JUSTIFY_LEFT);
   label62->set_line_wrap(true);
   label62->set_use_markup(false);
   label62->set_selectable(false);
   label63->set_alignment(0.5,0.5);
   label63->set_padding(0,0);
   label63->set_justify(Gtk::JUSTIFY_LEFT);
   label63->set_line_wrap(false);
   label63->set_use_markup(false);
   label63->set_selectable(false);
   entry_exit_pos_x->set_flags(Gtk::CAN_FOCUS);
   entry_exit_pos_x->set_visibility(true);
   entry_exit_pos_x->set_editable(true);
   entry_exit_pos_x->set_max_length(0);
   entry_exit_pos_x->set_text(_(""));
   entry_exit_pos_x->set_has_frame(true);
   entry_exit_pos_x->set_activates_default(false);
   entry_exit_pos_x->set_width_chars(8);
   label64->set_alignment(0.5,0.5);
   label64->set_padding(0,0);
   label64->set_justify(Gtk::JUSTIFY_LEFT);
   label64->set_line_wrap(false);
   label64->set_use_markup(false);
   label64->set_selectable(false);
   entry_exit_pos_y->set_flags(Gtk::CAN_FOCUS);
   entry_exit_pos_y->set_visibility(true);
   entry_exit_pos_y->set_editable(true);
   entry_exit_pos_y->set_max_length(0);
   entry_exit_pos_y->set_text(_(""));
   entry_exit_pos_y->set_has_frame(true);
   entry_exit_pos_y->set_activates_default(false);
   entry_exit_pos_y->set_width_chars(8);
   label65->set_alignment(0.5,0.5);
   label65->set_padding(0,0);
   label65->set_justify(Gtk::JUSTIFY_LEFT);
   label65->set_line_wrap(false);
   label65->set_use_markup(false);
   label65->set_selectable(false);
   entry_exit_pos_z->set_flags(Gtk::CAN_FOCUS);
   entry_exit_pos_z->set_visibility(true);
   entry_exit_pos_z->set_editable(true);
   entry_exit_pos_z->set_max_length(0);
   entry_exit_pos_z->set_text(_(""));
   entry_exit_pos_z->set_has_frame(true);
   entry_exit_pos_z->set_activates_default(false);
   entry_exit_pos_z->set_width_chars(8);
   label_exit_pos_unit->set_alignment(0.5,0.5);
   label_exit_pos_unit->set_padding(0,0);
   label_exit_pos_unit->set_justify(Gtk::JUSTIFY_LEFT);
   label_exit_pos_unit->set_line_wrap(false);
   label_exit_pos_unit->set_use_markup(false);
   label_exit_pos_unit->set_selectable(false);
   hbox38->pack_start(*label62, Gtk::PACK_SHRINK, 0);
   hbox38->pack_start(*label63, Gtk::PACK_SHRINK, 1);
   hbox38->pack_start(*entry_exit_pos_x, Gtk::PACK_SHRINK, 0);
   hbox38->pack_start(*label64, Gtk::PACK_SHRINK, 1);
   hbox38->pack_start(*entry_exit_pos_y, Gtk::PACK_SHRINK, 0);
   hbox38->pack_start(*label65, Gtk::PACK_SHRINK, 1);
   hbox38->pack_start(*entry_exit_pos_z, Gtk::PACK_SHRINK, 0);
   hbox38->pack_start(*label_exit_pos_unit, Gtk::PACK_SHRINK, 1);
   vbox9->pack_start(*hbox37, Gtk::PACK_SHRINK, 0);
   vbox9->pack_start(*hbox38, Gtk::PACK_SHRINK, 0);
   label35->set_alignment(0.5,0.5);
   label35->set_padding(0,0);
   label35->set_justify(Gtk::JUSTIFY_LEFT);
   label35->set_line_wrap(false);
   label35->set_use_markup(false);
   label35->set_selectable(false);
   notebook2->set_flags(Gtk::CAN_FOCUS);
   notebook2->set_show_tabs(true);
   notebook2->set_show_border(true);
   notebook2->set_tab_pos(Gtk::POS_TOP);
   notebook2->set_scrollable(false);
   notebook2->append_page(*vbox10, *label41);
   notebook2->pages().back().set_tab_label_packing(false, true, Gtk::PACK_START);
   notebook2->append_page(*vbox8, *label34);
   notebook2->pages().back().set_tab_label_packing(false, true, Gtk::PACK_START);
   notebook2->append_page(*vbox9, *label35);
   notebook2->pages().back().set_tab_label_packing(false, true, Gtk::PACK_START);
   DialogSetting->get_vbox()->set_homogeneous(false);
   DialogSetting->get_vbox()->set_spacing(0);
   DialogSetting->get_vbox()->pack_start(*notebook2);
   DialogSetting->set_title(_("GCncCam::Settings"));
   DialogSetting->set_modal(true);
   DialogSetting->property_window_position().set_value(Gtk::WIN_POS_NONE);
   DialogSetting->set_resizable(true);
   DialogSetting->property_destroy_with_parent().set_value(false);
   DialogSetting->set_has_separator(true);
   DialogSetting->add_action_widget(*cancelbutton1, -6);
   DialogSetting->add_action_widget(*okbutton1, -5);
   cancelbutton1->show();
   okbutton1->show();
   label42->show();
   combo_units->show();
   hbox25->show();
   label43->show();
   label_unit_length->show();
   hbox26->show();
   label45->show();
   label_unit_speed->show();
   hbox27->show();
   vbox10->show();
   label41->show();
   label60->show();
   check_tool_change->show();
   hbox36->show();
   label55->show();
   label56->show();
   entry_tool_change_x->show();
   label57->show();
   entry_tool_change_y->show();
   label58->show();
   entry_tool_change_z->show();
   label_tool_change_pos_unit->show();
   hbox34->show();
   label51->show();
   check_tool_sensor->show();
   hbox29->show();
   label47->show();
   label48->show();
   entry_tool_sensor_x->show();
   label49->show();
   entry_tool_sensor_y->show();
   label50->show();
   entry_tool_sensor_z->show();
   label_tool_sensor_pos_unit->show();
   hbox28->show();
   label54->show();
   entry_tool_sensor_height->show();
   label_tool_sensor_height_unit->show();
   hbox33->show();
   label52->show();
   entry_touchoff_zpos->show();
   label_touchoff_unit->show();
   hbox30->show();
   label53->show();
   entry_probe_feed_rate->show();
   hbox32->show();
   label_probe_feed_rate_unit->show();
   hbox31->show();
   vbox8->show();
   label34->show();
   label61->show();
   check_add_exit_pos->show();
   hbox37->show();
   label62->show();
   label63->show();
   entry_exit_pos_x->show();
   label64->show();
   entry_exit_pos_y->show();
   label65->show();
   entry_exit_pos_z->show();
   label_exit_pos_unit->show();
   hbox38->show();
   vbox9->show();
   label35->show();
   notebook2->show();
   DialogSetting->show();
   combo_units->signal_changed().connect(SigC::slot(*this, &DialogSetting_glade::on_combo_units_changed), false);
   check_tool_change->signal_toggled().connect(SigC::slot(*this, &DialogSetting_glade::on_check_tool_change_toggled), false);
   check_tool_sensor->signal_toggled().connect(SigC::slot(*this, &DialogSetting_glade::on_check_tool_sensor_toggled), false);
   check_add_exit_pos->signal_toggled().connect(SigC::slot(*this, &DialogSetting_glade::on_check_add_exit_pos_toggled), false);
}

DialogSetting_glade::~DialogSetting_glade()
{  delete gmm_data;
}
