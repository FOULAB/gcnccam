// generated 2008/4/15 15:29:59 CEST by abegeman@sonyx.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/abegeman/projects/c_projekt/gcnccam/gcnccam.glade
// for gtk 2.8.20 and gtkmm 2.8.8
//
// Please modify the corresponding derived classes in ./src/FrameLayerProperty.hh and./src/FrameLayerProperty.cc

#ifndef _FRAMELAYERPROPERTY_GLADE_HH
#  define _FRAMELAYERPROPERTY_GLADE_HH


#if !defined(GLADEMM_DATA)
#define GLADEMM_DATA 
#include <gtkmm/accelgroup.h>

class GlademmData
{  
        
        Glib::RefPtr<Gtk::AccelGroup> accgrp;
public:
        
        GlademmData(Glib::RefPtr<Gtk::AccelGroup> ag) : accgrp(ag)
        {  
        }
        
        Glib::RefPtr<Gtk::AccelGroup>  getAccelGroup()
        {  return accgrp;
        }
};
#endif //GLADEMM_DATA

#include <gtkmm/frame.h>
#include <gtkmm/tooltips.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/box.h>
#include <gtkmm/combobox.h>
#include <gtkmm/checkbutton.h>
#include <gtkmm/button.h>

class FrameLayerProperty_glade : public Gtk::Frame
{  
public:
        
        Gtk::Tooltips _tooltips;
        class Gtk::Frame * FrameLayerProperty;
        class Gtk::Label * WidgetqVgyCHQ;
        class Gtk::Entry * entry_property_name;
        class Gtk::HBox * hbox5;
        class Gtk::Label * label16;
        class Gtk::Entry * entry_comment;
        class Gtk::HBox * hbox6;
        class Gtk::Label * label22;
        class Gtk::HBox * hbox_color;
        class Gtk::Label * label28;
        class Gtk::Entry * entry_priority;
        class Gtk::HBox * hbox20;
        class Gtk::Label * label17;
        class Gtk::ComboBox * combo_direction;
        class Gtk::HBox * hbox7;
        class Gtk::Label * label18;
        class Gtk::ComboBox * combo_position;
        class Gtk::HBox * hbox8;
        class Gtk::Label * label20;
        class Gtk::Entry * entry_cut_feed_rate;
        class Gtk::HBox * hbox10;
        class Gtk::Label * label21;
        class Gtk::Entry * entry_z_start_position;
        class Gtk::HBox * hbox11;
        class Gtk::Label * label59;
        class Gtk::Entry * entry_cut_depth;
        class Gtk::HBox * hbox35;
        class Gtk::Label * label23;
        class Gtk::Entry * entry_zpitch;
        class Gtk::HBox * hbox13;
        class Gtk::Label * label30;
        class Gtk::Entry * entry_z_feed_rate;
        class Gtk::HBox * hbox21;
        class Gtk::Label * label31;
        class Gtk::CheckButton * check_drill_smaller;
        class Gtk::HBox * hbox22;
        class Gtk::Label * label24;
        class Gtk::ComboBox * combo_tool;
        class Gtk::HBox * hbox14;
        class Gtk::Label * label25;
        class Gtk::Entry * entry_spindlespeed;
        class Gtk::HBox * hbox15;
        class Gtk::Label * label26;
        class Gtk::CheckButton * check_cooling_mist;
        class Gtk::HBox * hbox16;
        class Gtk::Label * label32;
        class Gtk::CheckButton * check_cooling_flood;
        class Gtk::HBox * hbox23;
        class Gtk::VBox * vbox4;
        class Gtk::Button * button_ok;
        class Gtk::Button * button_cancel;
        class Gtk::VBox * vbox6;
        class Gtk::HBox * hbox18;
protected:
        
        FrameLayerProperty_glade(GlademmData *gmm_data);
        
        ~FrameLayerProperty_glade();
private:
        virtual void on_check_cooling_mist_toggled() = 0;
        virtual void on_button_ok_clicked() = 0;
        virtual void on_button_cancel_clicked() = 0;
};
#endif