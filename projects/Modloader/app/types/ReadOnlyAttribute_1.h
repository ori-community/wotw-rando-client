#pragma once
#include <Modloader/app/structs/ReadOnlyAttribute_1.h>
#include <Modloader/app/structs/ReadOnlyAttribute_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReadOnlyAttribute_1 {
        inline app::ReadOnlyAttribute_1__Class** type_info() {
            static app::ReadOnlyAttribute_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReadOnlyAttribute_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReadOnlyAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::ReadOnlyAttribute_1__Class>(type_info(), "Unity.Collections", "ReadOnlyAttribute");
        }
        inline app::ReadOnlyAttribute_1* create() {
            return il2cpp::create_object<app::ReadOnlyAttribute_1>(get_class());
        }
    } // namespace ReadOnlyAttribute_1
} // namespace app::classes::types
