#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HTML_HorizontalScroll_t {
        namespace {
            inline app::HTML_HorizontalScroll_t__Class* type_info_ref = nullptr;
        }
        inline app::HTML_HorizontalScroll_t__Class** type_info = &type_info_ref;
        inline app::HTML_HorizontalScroll_t__Class* get_class() {
            return il2cpp::get_class<app::HTML_HorizontalScroll_t__Class>(type_info, "Steamworks", "HTML_HorizontalScroll_t");
        }
        inline app::HTML_HorizontalScroll_t* create() {
            return il2cpp::create_object<app::HTML_HorizontalScroll_t>(get_class());
        }
        inline app::HTML_HorizontalScroll_t__Boxed* box(app::HTML_HorizontalScroll_t value) {
            return il2cpp::box_value<app::HTML_HorizontalScroll_t__Boxed>(get_class(), value);
        }
    } // namespace HTML_HorizontalScroll_t
} // namespace app::classes::types
