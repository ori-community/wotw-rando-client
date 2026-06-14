#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CookieCollection.h>
#include <Modloader/app/structs/CookieCollection_CookieCollectionEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::CookieCollection_CookieCollectionEnumerator {
    IL2CPP_REGISTER_METHOD(0x01EA2210, void, ctor, app::CookieCollection_CookieCollectionEnumerator* this_ptr, app::CookieCollection* cookies)
    IL2CPP_REGISTER_METHOD(0x01EA2270, app::Object*, IEnumerator_get_Current, app::CookieCollection_CookieCollectionEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EA23A0, bool, IEnumerator_MoveNext, app::CookieCollection_CookieCollectionEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EA24A0, void, IEnumerator_Reset, app::CookieCollection_CookieCollectionEnumerator* this_ptr)
} // namespace app::classes::System::Net::CookieCollection_CookieCollectionEnumerator
