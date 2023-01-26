#pragma once
#include <Modloader/app/structs/CharMetaData_1.h>
#include <Modloader/app/structs/CharMetaData_1__Boxed.h>
#include <Modloader/app/structs/CharMetaData_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharMetaData_1 {
        inline app::CharMetaData_1__Class** type_info() {
            static app::CharMetaData_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharMetaData_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharMetaData_1__Class* get_class() {
            return il2cpp::get_class<app::CharMetaData_1__Class>(type_info(), "Moon.UI", "CharMetaData");
        }
        inline app::CharMetaData_1* create() {
            return il2cpp::create_object<app::CharMetaData_1>(get_class());
        }
        inline app::CharMetaData_1__Boxed* box(app::CharMetaData_1 value) {
            return il2cpp::box_value<app::CharMetaData_1__Boxed>(get_class(), value);
        }
    } // namespace CharMetaData_1
} // namespace app::classes::types
