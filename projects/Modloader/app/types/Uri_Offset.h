#pragma once
#include <Modloader/app/structs/Uri_Offset.h>
#include <Modloader/app/structs/Uri_Offset__Boxed.h>
#include <Modloader/app/structs/Uri_Offset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Uri_Offset {
        inline app::Uri_Offset__Class** type_info() {
            static app::Uri_Offset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Uri_Offset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Uri_Offset__Class* get_class() {
            return il2cpp::get_nested_class<app::Uri_Offset__Class>(type_info(), "System", "Uri", "Offset");
        }
        inline app::Uri_Offset* create() {
            return il2cpp::create_object<app::Uri_Offset>(get_class());
        }
        inline app::Uri_Offset__Boxed* box(app::Uri_Offset value) {
            return il2cpp::box_value<app::Uri_Offset__Boxed>(get_class(), value);
        }
    } // namespace Uri_Offset
} // namespace app::classes::types
