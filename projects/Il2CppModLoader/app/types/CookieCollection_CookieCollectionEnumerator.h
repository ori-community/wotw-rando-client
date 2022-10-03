#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CookieCollection_CookieCollectionEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CookieCollection_CookieCollectionEnumerator__Class** type_info;
        inline app::CookieCollection_CookieCollectionEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::CookieCollection_CookieCollectionEnumerator__Class>(type_info, "System.Net", "CookieCollection", "CookieCollectionEnumerator");
        }
        inline app::CookieCollection_CookieCollectionEnumerator* create() {
            return il2cpp::create_object<app::CookieCollection_CookieCollectionEnumerator>(get_class());
        }
    } // namespace CookieCollection_CookieCollectionEnumerator
} // namespace app::classes::types
