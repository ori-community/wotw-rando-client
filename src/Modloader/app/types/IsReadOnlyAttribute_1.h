#pragma once
#include <Modloader/app/structs/IsReadOnlyAttribute_1.h>
#include <Modloader/app/structs/IsReadOnlyAttribute_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsReadOnlyAttribute_1 {
        inline app::IsReadOnlyAttribute_1__Class** type_info() {
            static app::IsReadOnlyAttribute_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsReadOnlyAttribute_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsReadOnlyAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::IsReadOnlyAttribute_1__Class>(type_info(), "System.Runtime.CompilerServices", "IsReadOnlyAttribute");
        }
        inline app::IsReadOnlyAttribute_1* create() {
            return il2cpp::create_object<app::IsReadOnlyAttribute_1>(get_class());
        }
    } // namespace IsReadOnlyAttribute_1
} // namespace app::classes::types
