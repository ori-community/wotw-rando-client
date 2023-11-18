#pragma once
#include <Modloader/app/structs/WidgetUIHorizontalSelect.h>
#include <Modloader/app/structs/WidgetUIHorizontalSelect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WidgetUIHorizontalSelect {
        inline app::WidgetUIHorizontalSelect__Class** type_info() {
            static app::WidgetUIHorizontalSelect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WidgetUIHorizontalSelect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WidgetUIHorizontalSelect__Class* get_class() {
            return il2cpp::get_class<app::WidgetUIHorizontalSelect__Class>(type_info(), "", "WidgetUIHorizontalSelect");
        }
        inline app::WidgetUIHorizontalSelect* create() {
            return il2cpp::create_object<app::WidgetUIHorizontalSelect>(get_class());
        }
    } // namespace WidgetUIHorizontalSelect
} // namespace app::classes::types
