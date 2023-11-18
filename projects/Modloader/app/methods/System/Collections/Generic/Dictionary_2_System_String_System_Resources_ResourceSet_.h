#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Resources_ResourceSet_.h>
#include <Modloader/app/structs/ResourceSet.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Resources_ResourceSet_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_System_Resources_ResourceSet_ * this_ptr, app::String* key, app::ResourceSet** value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_System_Resources_ResourceSet_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BB8BA0, bool, ContainsValue, (app::Dictionary_2_System_String_System_Resources_ResourceSet_ * this_ptr, app::ResourceSet* value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_Resources_ResourceSet_ * this_ptr, app::String* key, app::ResourceSet* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Resources_ResourceSet_
