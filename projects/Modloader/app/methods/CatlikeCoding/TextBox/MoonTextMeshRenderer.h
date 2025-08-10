#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharMetaData.h>
#include <Modloader/app/structs/MoonTextMeshRenderer.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::CatlikeCoding::TextBox::MoonTextMeshRenderer {
    IL2CPP_REGISTER_METHOD(0x010307E0, void, Awake, app::MoonTextMeshRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010308A0, void, Start, app::MoonTextMeshRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01030950, void, Prepare, app::MoonTextMeshRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01031650, void, Add, app::MoonTextMeshRenderer* this_ptr, app::CharMetaData meta, app::Vector2 offset, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01031E40, void, Apply, app::MoonTextMeshRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01032140, void, ctor, app::MoonTextMeshRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010324D0, void, cctor, )
} // namespace app::classes::CatlikeCoding::TextBox::MoonTextMeshRenderer
