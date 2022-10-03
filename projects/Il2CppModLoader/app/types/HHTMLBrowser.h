#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HHTMLBrowser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HHTMLBrowser__Class** type_info;
        inline app::HHTMLBrowser__Class* get_class() {
            return il2cpp::get_class<app::HHTMLBrowser__Class>(type_info, "Steamworks", "HHTMLBrowser");
        }
        inline app::HHTMLBrowser* create() {
            return il2cpp::create_object<app::HHTMLBrowser>(get_class());
        }
        inline app::HHTMLBrowser__Boxed* box(app::HHTMLBrowser value) {
            return il2cpp::box_value<app::HHTMLBrowser__Boxed>(get_class(), value);
        }
    } // namespace HHTMLBrowser
} // namespace app::classes::types
