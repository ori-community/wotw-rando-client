#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_LightCullingSystem_LightCullingConfigPerType___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingConfigPerType.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_LightCullingSystem_LightCullingConfigPerType_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_LightCullingSystem_LightCullingConfigPerType___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_LightCullingSystem_LightCullingConfigPerType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_LightCullingSystem_LightCullingConfigPerType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00162FD0, app::LightCullingSystem_LightCullingConfigPerType, get_Current, (app::Array_InternalEnumerator_1_LightCullingSystem_LightCullingConfigPerType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768560, Array_InternalEnumerator_1_LightCullingSystem_LightCullingConfigPerType__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_LightCullingSystem_LightCullingConfigPerType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00163000, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_LightCullingSystem_LightCullingConfigPerType___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_LightCullingSystem_LightCullingConfigPerType_
