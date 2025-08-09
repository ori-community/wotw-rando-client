#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextBox.h>
#include <Modloader/app/structs/TextRenderer__Array.h>
#include <Modloader/app/structs/TextStyleCollection.h>
#include <Modloader/app/structs/Text_1.h>

namespace app::classes::CatlikeCoding::TextBox::TextStyleCollection {
    IL2CPP_REGISTER_METHOD(0x01038AA0, void, ComputeRendererCount, app::TextStyleCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01038CE0, void, ClearRenderers_1, app::TextStyleCollection* this_ptr, app::Text_1* box)
    IL2CPP_REGISTER_METHOD(0x01038F80, void, ClearRenderers_2, app::TextStyleCollection* this_ptr, app::TextBox* box)
    IL2CPP_REGISTER_METHOD(0x010391D0, app::TextRenderer__Array*, CreateRenderers_1, app::TextStyleCollection* this_ptr, app::TextBox* box)
    IL2CPP_REGISTER_METHOD(0x010395C0, app::TextRenderer__Array*, CreateRenderers_2, app::TextStyleCollection* this_ptr, app::Text_1* box)
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::TextStyleCollection* this_ptr)
} // namespace app::classes::CatlikeCoding::TextBox::TextStyleCollection
