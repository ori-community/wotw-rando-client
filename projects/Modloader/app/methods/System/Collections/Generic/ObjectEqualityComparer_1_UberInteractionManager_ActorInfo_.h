#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_UberInteractionManager_ActorInfo_.h>
#include <Modloader/app/structs/UberInteractionManager_ActorInfo.h>
#include <Modloader/app/structs/UberInteractionManager_ActorInfo__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UberInteractionManager_ActorInfo_ {
    IL2CPP_REGISTER_METHOD(0x01CD2410, bool, Equals_1, (app::ObjectEqualityComparer_1_UberInteractionManager_ActorInfo_ * this_ptr, app::UberInteractionManager_ActorInfo x, app::UberInteractionManager_ActorInfo y))
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_UberInteractionManager_ActorInfo_ * this_ptr, app::UberInteractionManager_ActorInfo obj))
    IL2CPP_REGISTER_METHOD(0x01CD24D0, int32_t, IndexOf, (app::ObjectEqualityComparer_1_UberInteractionManager_ActorInfo_ * this_ptr, app::UberInteractionManager_ActorInfo__Array* array, app::UberInteractionManager_ActorInfo value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CD2660, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_UberInteractionManager_ActorInfo_ * this_ptr, app::UberInteractionManager_ActorInfo__Array* array, app::UberInteractionManager_ActorInfo value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_UberInteractionManager_ActorInfo_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_UberInteractionManager_ActorInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_UberInteractionManager_ActorInfo_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UberInteractionManager_ActorInfo_
