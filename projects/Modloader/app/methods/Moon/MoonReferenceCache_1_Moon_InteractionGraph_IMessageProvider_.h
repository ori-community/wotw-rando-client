#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMessageProvider.h>
#include <Modloader/app/structs/MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_InteractionGraph_IMessageProvider_.h>

namespace app::classes::Moon::MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_ {
    IL2CPP_REGISTER_METHOD(0x027204F0, app::IMessageProvider*, GetValue, (app::MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_ * this_ptr, app::MoonReference_1_Moon_InteractionGraph_IMessageProvider_* moon_ref))
    IL2CPP_REGISTER_METHOD(0x02720590, void, ctor, (app::MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_ * this_ptr, bool always_resolve_on_editor))
} // namespace app::classes::Moon::MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_
