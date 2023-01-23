#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WidgetUIHorizontalSelect__Class.h>
#include <Modloader/app/structs/WidgetUIHorizontalSelect.h>

namespace app::classes::types {
    namespace WidgetUIHorizontalSelect {
        namespace {
            inline app::WidgetUIHorizontalSelect__Class* type_info_ref = nullptr;
        }
        inline app::WidgetUIHorizontalSelect__Class** type_info = &type_info_ref;
        inline app::WidgetUIHorizontalSelect__Class* get_class() {
            return il2cpp::get_class<app::WidgetUIHorizontalSelect__Class>(type_info, "", "WidgetUIHorizontalSelect");
        }
        inline app::WidgetUIHorizontalSelect* create() {
            return il2cpp::create_object<app::WidgetUIHorizontalSelect>(get_class());
        }
    } // namespace WidgetUIHorizontalSelect
} // namespace app::classes::types
