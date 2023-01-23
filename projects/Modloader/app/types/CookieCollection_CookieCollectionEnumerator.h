#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CookieCollection_CookieCollectionEnumerator__Class.h>
#include <Modloader/app/structs/CookieCollection_CookieCollectionEnumerator.h>

namespace app::classes::types {
    namespace CookieCollection_CookieCollectionEnumerator {
        inline app::CookieCollection_CookieCollectionEnumerator__Class** type_info = (app::CookieCollection_CookieCollectionEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0472ACF0));
        inline app::CookieCollection_CookieCollectionEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::CookieCollection_CookieCollectionEnumerator__Class>(type_info, "System.Net", "CookieCollection", "CookieCollectionEnumerator");
        }
        inline app::CookieCollection_CookieCollectionEnumerator* create() {
            return il2cpp::create_object<app::CookieCollection_CookieCollectionEnumerator>(get_class());
        }
    } // namespace CookieCollection_CookieCollectionEnumerator
} // namespace app::classes::types
