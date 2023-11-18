#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MaterialBasedResourceMapEntry_1_HornBugMovementEffects_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::MaterialBasedResourceMapEntry_1_HornBugMovementEffects_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::MaterialBasedResourceMapEntry_1_HornBugMovementEffects_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019FA100, app::Type*, get_ResourceType, (app::MaterialBasedResourceMapEntry_1_HornBugMovementEffects_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_ResourceObject, (app::MaterialBasedResourceMapEntry_1_HornBugMovementEffects_ * this_ptr))
} // namespace app::classes::MaterialBasedResourceMapEntry_1_HornBugMovementEffects_
