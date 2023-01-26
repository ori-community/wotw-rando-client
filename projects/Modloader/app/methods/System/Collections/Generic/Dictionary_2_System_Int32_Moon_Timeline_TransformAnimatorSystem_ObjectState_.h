#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/TransformAnimatorSystem_ObjectState.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ * this_ptr, int32_t key, app::TransformAnimatorSystem_ObjectState** value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ * this_ptr, int32_t key, app::TransformAnimatorSystem_ObjectState* value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ * this_ptr, int32_t key, app::TransformAnimatorSystem_ObjectState* value))
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::TransformAnimatorSystem_ObjectState*, get_Item, (app::Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, (app::Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ * this_ptr, int32_t key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_
