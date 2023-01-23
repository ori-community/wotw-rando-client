#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RuntimeResourceSet.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ResourceLocator.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Resources_ResourceLocator_.h>

namespace app::classes::System::Resources::RuntimeResourceSet {
    IL2CPP_REGISTER_METHOD(0x01A8E5F0, void, ctor_1, (app::RuntimeResourceSet * this_ptr, app::String* file_name))
    IL2CPP_REGISTER_METHOD(0x01A8E980, void, ctor_2, (app::RuntimeResourceSet * this_ptr, app::Stream* stream))
    IL2CPP_REGISTER_METHOD(0x01A8EC10, void, Dispose, (app::RuntimeResourceSet * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01A8ED70, app::IDictionaryEnumerator*, GetEnumerator, (app::RuntimeResourceSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A8ED70, app::IEnumerator*, IEnumerable_GetEnumerator, (app::RuntimeResourceSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A8ED80, app::IDictionaryEnumerator*, GetEnumeratorHelper, (app::RuntimeResourceSet * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047873F8, RuntimeResourceSet_GetEnumeratorHelper__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A8EE60, app::String*, GetString_1, (app::RuntimeResourceSet * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x01A8EF20, app::String*, GetString_2, (app::RuntimeResourceSet * this_ptr, app::String* key, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x01A8EFF0, app::Object*, GetObject_1, (app::RuntimeResourceSet * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x01A8F010, app::Object*, GetObject_2, (app::RuntimeResourceSet * this_ptr, app::String* key, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x01A8F030, app::Object*, GetObject_3, (app::RuntimeResourceSet * this_ptr, app::String* key, bool ignore_case, bool is_string))
    IL2CPP_REGISTER_METHODINFO(0x04765E90, RuntimeResourceSet_GetObject_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A8FAA0, app::Object*, ResolveResourceLocator, (app::RuntimeResourceSet * this_ptr, app::ResourceLocator res_location, app::String* key, app::Dictionary_2_System_String_System_Resources_ResourceLocator_* copy_of_cache, bool key_in_wrong_case))
} // namespace app::classes::System::Resources::RuntimeResourceSet
