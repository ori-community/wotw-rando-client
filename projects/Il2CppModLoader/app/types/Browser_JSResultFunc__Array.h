#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Browser_JSResultFunc__Array {
        namespace {
            app::Browser_JSResultFunc__Array__Class* type_info_ref = nullptr;
        }
        app::Browser_JSResultFunc__Array__Class** type_info = &type_info_ref;
        inline app::Browser_JSResultFunc__Array__Class* get_class() {
            return il2cpp::get_class<app::Browser_JSResultFunc__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Browser+JSResultFunc[]");
        }
        inline app::Browser_JSResultFunc__Array* create() {
            return il2cpp::create_object<app::Browser_JSResultFunc__Array>(get_class());
        }
    } // namespace Browser_JSResultFunc__Array
} // namespace app::classes::types
