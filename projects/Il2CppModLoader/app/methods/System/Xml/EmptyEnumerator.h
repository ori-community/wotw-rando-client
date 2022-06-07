#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::EmptyEnumerator {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IEnumerator_MoveNext, (app::EmptyEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IEnumerator_Reset, (app::EmptyEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021F8150, app::Object *, IEnumerator_get_Current, (app::EmptyEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768EC0, EmptyEnumerator_System_Collections_IEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EmptyEnumerator * this_ptr))
}
