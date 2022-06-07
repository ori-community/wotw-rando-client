#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Http::Headers::HttpHeaderValueCollection_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0243AC00, int32_t, get_Count, (app::HttpHeaderValueCollection_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::List_1_System_String_ *, get_InvalidValues, (app::HttpHeaderValueCollection_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::HttpHeaderValueCollection_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254D850, void, Add, (app::HttpHeaderValueCollection_1_System_Object_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x0254D880, void, Clear, (app::HttpHeaderValueCollection_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A72D00, bool, Contains, (app::HttpHeaderValueCollection_1_System_Object_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x0254D8C0, void, CopyTo, (app::HttpHeaderValueCollection_1_System_Object_ * this_ptr, app::Object__Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x0254D8F0, bool, Remove, (app::HttpHeaderValueCollection_1_System_Object_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x0254D920, app::String *, ToString, (app::HttpHeaderValueCollection_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254D9D0, app::IEnumerator_1_System_Object_ *, GetEnumerator, (app::HttpHeaderValueCollection_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D9BE0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::HttpHeaderValueCollection_1_System_Object_ * this_ptr))
}
