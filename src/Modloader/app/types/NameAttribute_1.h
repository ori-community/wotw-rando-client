#pragma once
#include <Modloader/app/structs/NameAttribute_1.h>
#include <Modloader/app/structs/NameAttribute_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameAttribute_1 {
        inline app::NameAttribute_1__Class** type_info() {
            static app::NameAttribute_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NameAttribute_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NameAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::NameAttribute_1__Class>(type_info(), "", "NameAttribute");
        }
        inline app::NameAttribute_1* create() {
            return il2cpp::create_object<app::NameAttribute_1>(get_class());
        }
    } // namespace NameAttribute_1
} // namespace app::classes::types
