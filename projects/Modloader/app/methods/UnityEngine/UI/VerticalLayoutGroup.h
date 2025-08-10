#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VerticalLayoutGroup.h>

namespace app::classes::UnityEngine::UI::VerticalLayoutGroup {
    IL2CPP_REGISTER_METHOD(0x024B6530, void, ctor, app::VerticalLayoutGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031ABFD0, void, CalculateLayoutInputHorizontal, app::VerticalLayoutGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031AC000, void, CalculateLayoutInputVertical, app::VerticalLayoutGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031AC010, void, SetLayoutHorizontal, app::VerticalLayoutGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031AC020, void, SetLayoutVertical, app::VerticalLayoutGroup* this_ptr)
} // namespace app::classes::UnityEngine::UI::VerticalLayoutGroup
