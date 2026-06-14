#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextMeshTorusRenderer.h>

namespace app::classes::CatlikeCoding::TextBox::TextMeshTorusRenderer {
    IL2CPP_REGISTER_METHOD(0x010385A0, void, Apply, app::TextMeshTorusRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01038A00, void, ctor, app::TextMeshTorusRenderer* this_ptr)
} // namespace app::classes::CatlikeCoding::TextBox::TextMeshTorusRenderer
