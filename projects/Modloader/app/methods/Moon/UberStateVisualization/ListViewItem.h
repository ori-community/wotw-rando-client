#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ListViewItem.h>
#include <Modloader/app/structs/ListView.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Event.h>

namespace app::classes::Moon::UberStateVisualization::ListViewItem {
    IL2CPP_REGISTER_METHOD(0x019995A0, app::GUIStyle*, get_CenteredLabelStyle, ())
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Name, (app::ListViewItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsSelected, (app::ListViewItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01999830, void, ctor, (app::ListViewItem * this_ptr, int32_t control_id, app::String* name, app::ListView* parent_view))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, SetSelected, (app::ListViewItem * this_ptr, bool selected))
    IL2CPP_REGISTER_METHOD(0x01999840, void, OnHandleEvent, (app::ListViewItem * this_ptr, app::Rect rect, app::Event* e))
    IL2CPP_REGISTER_METHOD(0x01999970, void, OnGui, (app::ListViewItem * this_ptr, app::Rect rect, bool is_highlighted))
    IL2CPP_REGISTER_METHOD(0x01999E20, void, OnItemGui, (app::ListViewItem * this_ptr, app::Rect rect))
} // namespace app::classes::Moon::UberStateVisualization::ListViewItem
