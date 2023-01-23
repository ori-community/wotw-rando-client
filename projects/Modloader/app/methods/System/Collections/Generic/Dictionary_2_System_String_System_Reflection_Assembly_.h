#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Reflection_Assembly_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Assembly.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Reflection_Assembly_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_System_Reflection_Assembly_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779678, Dictionary_2_System_String_System_Reflection_Assembly___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_System_Reflection_Assembly_ * this_ptr, app::String* key, app::Assembly* value))
    IL2CPP_REGISTER_METHODINFO(0x04784A68, Dictionary_2_System_String_System_Reflection_Assembly__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_System_Reflection_Assembly_ * this_ptr, app::String* key, app::Assembly** value))
    IL2CPP_REGISTER_METHODINFO(0x0470BEF0, Dictionary_2_System_String_System_Reflection_Assembly__TryGetValue__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Reflection_Assembly_
