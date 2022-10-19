#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Browser_JSResultFunc {
        inline app::Browser_JSResultFunc__Class** type_info = (app::Browser_JSResultFunc__Class**)(modloader::win::memory::resolve_rva(0x04754210));
        inline app::Browser_JSResultFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::Browser_JSResultFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Browser", "JSResultFunc");
        }
        inline app::Browser_JSResultFunc* create() {
            return il2cpp::create_object<app::Browser_JSResultFunc>(get_class());
        }
        inline app::Browser_JSResultFunc__Array* create_array(int size) {
            return il2cpp::array_new<app::Browser_JSResultFunc__Array>(get_class(), size);
        }
        inline app::Browser_JSResultFunc__Array* create_array(const std::vector<app::Browser_JSResultFunc*>& items) {
            return il2cpp::array_new<app::Browser_JSResultFunc__Array>(get_class(), items);
        }
    } // namespace Browser_JSResultFunc
} // namespace app::classes::types
