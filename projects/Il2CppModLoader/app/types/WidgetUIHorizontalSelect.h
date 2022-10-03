#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WidgetUIHorizontalSelect {
        namespace {
            app::WidgetUIHorizontalSelect__Class* type_info_ref = nullptr;
        }
        app::WidgetUIHorizontalSelect__Class** type_info = &type_info_ref;
        inline app::WidgetUIHorizontalSelect__Class* get_class() {
            return il2cpp::get_class<app::WidgetUIHorizontalSelect__Class>(type_info, "", "WidgetUIHorizontalSelect");
        }
        inline app::WidgetUIHorizontalSelect* create() {
            return il2cpp::create_object<app::WidgetUIHorizontalSelect>(get_class());
        }
    } // namespace WidgetUIHorizontalSelect
} // namespace app::classes::types
