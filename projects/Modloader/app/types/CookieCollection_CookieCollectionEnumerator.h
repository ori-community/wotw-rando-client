#pragma once
#include <Modloader/app/structs/CookieCollection_CookieCollectionEnumerator.h>
#include <Modloader/app/structs/CookieCollection_CookieCollectionEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CookieCollection_CookieCollectionEnumerator {
        inline app::CookieCollection_CookieCollectionEnumerator__Class** type_info() {
            static app::CookieCollection_CookieCollectionEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CookieCollection_CookieCollectionEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0472ACF0));
            }
            return cache;
        }
        inline app::CookieCollection_CookieCollectionEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::CookieCollection_CookieCollectionEnumerator__Class>(type_info(), "System.Net", "CookieCollection", "CookieCollectionEnumerator");
        }
        inline app::CookieCollection_CookieCollectionEnumerator* create() {
            return il2cpp::create_object<app::CookieCollection_CookieCollectionEnumerator>(get_class());
        }
    } // namespace CookieCollection_CookieCollectionEnumerator
} // namespace app::classes::types
