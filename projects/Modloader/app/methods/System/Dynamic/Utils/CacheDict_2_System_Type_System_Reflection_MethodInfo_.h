#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CacheDict_2_System_Type_System_Reflection_MethodInfo_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Dynamic::Utils::CacheDict_2_System_Type_System_Reflection_MethodInfo_ {
    IL2CPP_REGISTER_METHOD(0x028793D0, bool, TryGetValue, (app::CacheDict_2_System_Type_System_Reflection_MethodInfo_ * this_ptr, app::Type* key, app::MethodInfo_1** value))
    IL2CPP_REGISTER_METHOD(0x028796E0, void, set_Item, (app::CacheDict_2_System_Type_System_Reflection_MethodInfo_ * this_ptr, app::Type* key, app::MethodInfo_1* value))
    IL2CPP_REGISTER_METHOD(0x02879320, void, ctor, (app::CacheDict_2_System_Type_System_Reflection_MethodInfo_ * this_ptr, int32_t size))
} // namespace app::classes::System::Dynamic::Utils::CacheDict_2_System_Type_System_Reflection_MethodInfo_
