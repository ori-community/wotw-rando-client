#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Resources_ResourceSet_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ResourceSet.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Resources_ResourceSet_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_System_Resources_ResourceSet_ * this_ptr, app::String* key, app::ResourceSet** value))
    IL2CPP_REGISTER_METHODINFO(0x0475A868, Dictionary_2_System_String_System_Resources_ResourceSet__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_System_Resources_ResourceSet_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769180, Dictionary_2_System_String_System_Resources_ResourceSet___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BB8BA0, bool, ContainsValue, (app::Dictionary_2_System_String_System_Resources_ResourceSet_ * this_ptr, app::ResourceSet* value))
    IL2CPP_REGISTER_METHODINFO(0x047680F8, Dictionary_2_System_String_System_Resources_ResourceSet__ContainsValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_Resources_ResourceSet_ * this_ptr, app::String* key, app::ResourceSet* value))
    IL2CPP_REGISTER_METHODINFO(0x04720EB0, Dictionary_2_System_String_System_Resources_ResourceSet__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Resources_ResourceSet_
