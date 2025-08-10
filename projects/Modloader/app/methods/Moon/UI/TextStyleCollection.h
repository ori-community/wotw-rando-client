#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextRenderer_1__Array.h>
#include <Modloader/app/structs/TextStyleCollection_1.h>
#include <Modloader/app/structs/Text_1.h>

namespace app::classes::Moon::UI::TextStyleCollection {
    IL2CPP_REGISTER_METHOD(0x0118AC20, void, ComputeRendererCount, app::TextStyleCollection_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0118AE60, void, ClearRenderers, app::TextStyleCollection_1* this_ptr, app::Text_1* box)
    IL2CPP_REGISTER_METHOD(0x0118B0B0, app::TextRenderer_1__Array*, CreateRenderers, app::TextStyleCollection_1* this_ptr, app::Text_1* box)
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::TextStyleCollection_1* this_ptr)
} // namespace app::classes::Moon::UI::TextStyleCollection
