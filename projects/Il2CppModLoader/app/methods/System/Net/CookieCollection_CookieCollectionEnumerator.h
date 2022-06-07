#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::CookieCollection_CookieCollectionEnumerator {
    IL2CPP_REGISTER_METHOD(0x01EA2210, void, ctor, (app::CookieCollection_CookieCollectionEnumerator * this_ptr, app::CookieCollection * cookies))
    IL2CPP_REGISTER_METHOD(0x01EA2270, app::Object *, IEnumerator_get_Current, (app::CookieCollection_CookieCollectionEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D920, CookieCollection_CookieCollectionEnumerator_System_Collections_IEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EA23A0, bool, IEnumerator_MoveNext, (app::CookieCollection_CookieCollectionEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472E740, CookieCollection_CookieCollectionEnumerator_System_Collections_IEnumerator_MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EA24A0, void, IEnumerator_Reset, (app::CookieCollection_CookieCollectionEnumerator * this_ptr))
}
