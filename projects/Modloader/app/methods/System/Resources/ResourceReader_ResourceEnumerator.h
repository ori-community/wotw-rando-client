#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Resources::ResourceReader_ResourceEnumerator {
    IL2CPP_REGISTER_METHOD(0x01A8D130, void, ctor, (app::ResourceReader_ResourceEnumerator * this_ptr, app::ResourceReader* reader))
    IL2CPP_REGISTER_METHOD(0x01A8D150, bool, MoveNext, (app::ResourceReader_ResourceEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A8D1A0, app::Object*, get_Key, (app::ResourceReader_ResourceEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04773AD8, ResourceReader_ResourceEnumerator_get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A8D320, app::Object*, get_Current, (app::ResourceReader_ResourceEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_DataPosition, (app::ResourceReader_ResourceEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A8D3C0, app::DictionaryEntry, get_Entry, (app::ResourceReader_ResourceEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474E728, ResourceReader_ResourceEnumerator_get_Entry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A8D7D0, app::Object*, get_Value, (app::ResourceReader_ResourceEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707538, ResourceReader_ResourceEnumerator_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A8D950, void, Reset, (app::ResourceReader_ResourceEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704C60, ResourceReader_ResourceEnumerator_Reset__MethodInfo)
} // namespace app::classes::System::Resources::ResourceReader_ResourceEnumerator
