#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TextMeshRenderer_1.h>
#include <Modloader/app/structs/CharMetaData_1.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Moon::UI::TextMeshRenderer {
    IL2CPP_REGISTER_METHOD(0x01189780, void, OnDestroy, (app::TextMeshRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01189830, void, Prepare, (app::TextMeshRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118A2A0, void, Add, (app::TextMeshRenderer_1 * this_ptr, app::CharMetaData_1 meta, app::Vector2 offset))
    IL2CPP_REGISTER_METHOD(0x01038360, void, Apply, (app::TextMeshRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010384E0, void, ctor, (app::TextMeshRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118A670, void, cctor, ())
} // namespace app::classes::Moon::UI::TextMeshRenderer
