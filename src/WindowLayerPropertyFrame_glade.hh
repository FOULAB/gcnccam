// generated 2007/9/9 16:37:55 CEST by abegeman@sonyx.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/abegeman/projects/c_projekt/gcnccam/gcnccam.glade
// for gtk 2.10.13 and gtkmm 2.10.10
//
// Please modify the corresponding derived classes in ./src/WindowLayerPropertyFrame.hh and./src/WindowLayerPropertyFrame.cc

#ifndef _WINDOWLAYERPROPERTYFRAME_GLADE_HH
#  define _WINDOWLAYERPROPERTYFRAME_GLADE_HH


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

#include <gtkmm/window.h>
#include "FrameLayerProperty.hh"

class WindowLayerPropertyFrame_glade : public Gtk::Window
{  
        
        GlademmData *gmm_data;
public:
        class Gtk::Window * WindowLayerPropertyFrame;
        class FrameLayerProperty * FrameLayerProperty;
protected:
        
        WindowLayerPropertyFrame_glade();
        
        ~WindowLayerPropertyFrame_glade();
};
#endif