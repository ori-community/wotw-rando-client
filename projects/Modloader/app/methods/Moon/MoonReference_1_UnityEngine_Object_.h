#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Object_.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::Moon::MoonReference_1_UnityEngine_Object_ {
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::Object_1*, SafeResolve, app::MoonReference_1_UnityEngine_Object_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, app::MoonReference_1_UnityEngine_Object_* this_ptr, app::Object_1* new_value)
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, app::MoonReference_1_UnityEngine_Object_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x027208E0, bool, get_IsStaticValue, app::MoonReference_1_UnityEngine_Object_* this_ptr)
} // namespace app::classes::Moon::MoonReference_1_UnityEngine_Object_
