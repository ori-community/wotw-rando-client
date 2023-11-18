#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ResourceSet.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Resources::ResourceSet {
    IL2CPP_REGISTER_METHOD(0x01A8DA30, void, ctor_1, (app::ResourceSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::ResourceSet * this_ptr, bool junk))
    IL2CPP_REGISTER_METHOD(0x01A8DA30, void, CommonInit, (app::ResourceSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A8DB90, void, Dispose_1, (app::ResourceSet * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01A8DC40, void, Dispose_2, (app::ResourceSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A8DC60, app::IDictionaryEnumerator*, GetEnumerator, (app::ResourceSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A8DC60, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ResourceSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A8DC70, app::IDictionaryEnumerator*, GetEnumeratorHelper, (app::ResourceSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A8DD50, app::String*, GetString_1, (app::ResourceSet * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01A8DEA0, app::String*, GetString_2, (app::ResourceSet * this_ptr, app::String* name, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x01A8E0B0, app::Object*, GetObject_1, (app::ResourceSet * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01A8E0C0, app::Object*, GetObject_2, (app::ResourceSet * this_ptr, app::String* name, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x01A8E110, app::Object*, GetObjectInternal, (app::ResourceSet * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01A8E230, app::Object*, GetCaseInsensitiveObjectInternal, (app::ResourceSet * this_ptr, app::String* name))
} // namespace app::classes::System::Resources::ResourceSet
