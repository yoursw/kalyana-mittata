#include <Elementary.h>
#include "km.h"

static void _on_done(void *data, Evas_Object *obj, void *event_info)
{
   // Quit the program when the window is closed
   elm_exit();
}

EAPI_MAIN int
elm_main(int argc, char **argv)
{
   Evas_Object *win, *box, *label, *btn;

   // Create a window
   win = elm_win_util_standard_add("kalyana-mittata", "Kalyana Mittata - AI Assistant");
   elm_win_autodel_set(win, EINA_TRUE);
   evas_object_smart_callback_add(win, "delete,request", _on_done, NULL);

   // Create a box container
   box = elm_box_add(win);
   evas_object_size_hint_weight_set(box, EVAS_HINT_EXPAND, EVAS_HINT_EXPAND);
   elm_win_resize_object_add(win, box);
   evas_object_show(box);

   // Add a label
   label = elm_label_add(box);
   elm_object_text_set(label, "Kalyana Mittata - AI Assistant for Mahachulalongkorn University");
   evas_object_size_hint_weight_set(label, EVAS_HINT_EXPAND, 0.0);
   evas_object_size_hint_align_set(label, EVAS_HINT_FILL, 0.5);
   elm_box_pack_end(box, label);
   evas_object_show(label);

   // Add a button
   btn = elm_button_add(box);
   elm_object_text_set(btn, "Start Conversation");
   evas_object_size_hint_weight_set(btn, EVAS_HINT_EXPAND, 0.0);
   evas_object_size_hint_align_set(btn, EVAS_HINT_FILL, 0.5);
   elm_box_pack_end(box, btn);
   evas_object_show(btn);

   // Set window size and show
   evas_object_resize(win, 300, 200);
   evas_object_show(win);

   // Run the main loop
   elm_run();
   
   // Shutdown EFL
   elm_shutdown();
   
   return 0;
}

ELM_MAIN()

