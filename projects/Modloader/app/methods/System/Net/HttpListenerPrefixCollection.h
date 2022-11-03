#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::HttpListenerPrefixCollection {
    IL2CPP_REGISTER_METHOD(0x01D45B30, void, ctor_1, (app::HttpListenerPrefixCollection * this_ptr, app::HttpListener* listener))
    IL2CPP_REGISTER_METHOD(0x01D45C90, int32_t, get_Count, (app::HttpListenerPrefixCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::HttpListenerPrefixCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::HttpListenerPrefixCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D45D20, void, Add, (app::HttpListenerPrefixCollection * this_ptr, app::String* uri_prefix))
    IL2CPP_REGISTER_METHOD(0x01D45E50, void, Clear, (app::HttpListenerPrefixCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D45F50, bool, Contains, (app::HttpListenerPrefixCollection * this_ptr, app::String* uri_prefix))
    IL2CPP_REGISTER_METHOD(0x01D46010, void, CopyTo_1, (app::HttpListenerPrefixCollection * this_ptr, app::String__Array* array, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01D460F0, void, CopyTo_2, (app::HttpListenerPrefixCollection * this_ptr, app::Array* array, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01D461B0, app::IEnumerator_1_System_String_*, GetEnumerator, (app::HttpListenerPrefixCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D46280, app::IEnumerator*, IEnumerable_GetEnumerator, (app::HttpListenerPrefixCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D46350, bool, Remove, (app::HttpListenerPrefixCollection * this_ptr, app::String* uri_prefix))
    IL2CPP_REGISTER_METHODINFO(0x04755BF0, HttpListenerPrefixCollection_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D464B0, void, ctor_2, (app::HttpListenerPrefixCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705EE8, HttpListenerPrefixCollection__ctor_1__MethodInfo)
} // namespace app::classes::System::Net::HttpListenerPrefixCollection
