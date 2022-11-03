#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HTML_UpdateToolTip_t {
        namespace {
            inline app::HTML_UpdateToolTip_t__Class* type_info_ref = nullptr;
        }
        inline app::HTML_UpdateToolTip_t__Class** type_info = &type_info_ref;
        inline app::HTML_UpdateToolTip_t__Class* get_class() {
            return il2cpp::get_class<app::HTML_UpdateToolTip_t__Class>(type_info, "Steamworks", "HTML_UpdateToolTip_t");
        }
        inline app::HTML_UpdateToolTip_t* create() {
            return il2cpp::create_object<app::HTML_UpdateToolTip_t>(get_class());
        }
        inline app::HTML_UpdateToolTip_t__Boxed* box(app::HTML_UpdateToolTip_t value) {
            return il2cpp::box_value<app::HTML_UpdateToolTip_t__Boxed>(get_class(), value);
        }
    } // namespace HTML_UpdateToolTip_t
} // namespace app::classes::types
