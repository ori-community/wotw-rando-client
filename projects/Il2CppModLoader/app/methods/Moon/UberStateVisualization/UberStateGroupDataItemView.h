#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::UberStateVisualization::UberStateGroupDataItemView {
    IL2CPP_REGISTER_METHOD(0x030C41D0, app::Texture2D*, get_Circle, ())
    IL2CPP_REGISTER_METHOD(0x030C4320, void, ctor, (app::UberStateGroupDataItemView * this_ptr, int32_t control_id, app::UberStateGroupData group_data, app::ListView* parent_view))
    IL2CPP_REGISTER_METHOD(0x030C43B0, void, OnItemGui, (app::UberStateGroupDataItemView * this_ptr, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x02AF45A0, app::UberStateGroupData, get_Data, (app::UberStateGroupDataItemView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::Moon::UberStateVisualization::UberStateGroupDataItemView
