#pragma once
#include <Modloader/app/structs/HTML_ShowToolTip_t.h>
#include <Modloader/app/structs/HTML_ShowToolTip_t__Boxed.h>
#include <Modloader/app/structs/HTML_ShowToolTip_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HTML_ShowToolTip_t {
        inline app::HTML_ShowToolTip_t__Class** type_info() {
            static app::HTML_ShowToolTip_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HTML_ShowToolTip_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HTML_ShowToolTip_t__Class* get_class() {
            return il2cpp::get_class<app::HTML_ShowToolTip_t__Class>(type_info(), "Steamworks", "HTML_ShowToolTip_t");
        }
        inline app::HTML_ShowToolTip_t* create() {
            return il2cpp::create_object<app::HTML_ShowToolTip_t>(get_class());
        }
        inline app::HTML_ShowToolTip_t__Boxed* box(app::HTML_ShowToolTip_t value) {
            return il2cpp::box_value<app::HTML_ShowToolTip_t__Boxed>(get_class(), value);
        }
    } // namespace HTML_ShowToolTip_t
} // namespace app::classes::types
