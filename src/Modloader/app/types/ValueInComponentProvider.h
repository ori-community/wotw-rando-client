#pragma once
#include <Modloader/app/structs/ValueInComponentProvider.h>
#include <Modloader/app/structs/ValueInComponentProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValueInComponentProvider {
        inline app::ValueInComponentProvider__Class** type_info() {
            static app::ValueInComponentProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ValueInComponentProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ValueInComponentProvider__Class* get_class() {
            return il2cpp::get_class<app::ValueInComponentProvider__Class>(type_info(), "", "ValueInComponentProvider");
        }
        inline app::ValueInComponentProvider* create() {
            return il2cpp::create_object<app::ValueInComponentProvider>(get_class());
        }
    } // namespace ValueInComponentProvider
} // namespace app::classes::types
