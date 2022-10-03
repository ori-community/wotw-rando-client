#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HTML_SetCursor_t {
        namespace {
            app::HTML_SetCursor_t__Class* type_info_ref = nullptr;
        }
        app::HTML_SetCursor_t__Class** type_info = &type_info_ref;
        inline app::HTML_SetCursor_t__Class* get_class() {
            return il2cpp::get_class<app::HTML_SetCursor_t__Class>(type_info, "Steamworks", "HTML_SetCursor_t");
        }
        inline app::HTML_SetCursor_t* create() {
            return il2cpp::create_object<app::HTML_SetCursor_t>(get_class());
        }
        inline app::HTML_SetCursor_t__Boxed* box(app::HTML_SetCursor_t value) {
            return il2cpp::box_value<app::HTML_SetCursor_t__Boxed>(get_class(), value);
        }
    } // namespace HTML_SetCursor_t
} // namespace app::classes::types
