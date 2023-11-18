#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HorizontalLayoutGroup.h>

namespace app::classes::UnityEngine::UI::HorizontalLayoutGroup {
    IL2CPP_REGISTER_METHOD(0x024B6530, void, ctor, (app::HorizontalLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B6550, void, CalculateLayoutInputHorizontal, (app::HorizontalLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B6580, void, CalculateLayoutInputVertical, (app::HorizontalLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B6590, void, SetLayoutHorizontal, (app::HorizontalLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B65A0, void, SetLayoutVertical, (app::HorizontalLayoutGroup * this_ptr))
} // namespace app::classes::UnityEngine::UI::HorizontalLayoutGroup
