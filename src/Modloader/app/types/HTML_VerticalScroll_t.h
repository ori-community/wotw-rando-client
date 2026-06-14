#pragma once
#include <Modloader/app/structs/HTML_VerticalScroll_t.h>
#include <Modloader/app/structs/HTML_VerticalScroll_t__Boxed.h>
#include <Modloader/app/structs/HTML_VerticalScroll_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HTML_VerticalScroll_t {
        inline app::HTML_VerticalScroll_t__Class** type_info() {
            static app::HTML_VerticalScroll_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HTML_VerticalScroll_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HTML_VerticalScroll_t__Class* get_class() {
            return il2cpp::get_class<app::HTML_VerticalScroll_t__Class>(type_info(), "Steamworks", "HTML_VerticalScroll_t");
        }
        inline app::HTML_VerticalScroll_t* create() {
            return il2cpp::create_object<app::HTML_VerticalScroll_t>(get_class());
        }
        inline app::HTML_VerticalScroll_t__Boxed* box(app::HTML_VerticalScroll_t value) {
            return il2cpp::box_value<app::HTML_VerticalScroll_t__Boxed>(get_class(), value);
        }
    } // namespace HTML_VerticalScroll_t
} // namespace app::classes::types
