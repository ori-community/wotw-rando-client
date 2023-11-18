#pragma once
#include <Modloader/app/structs/IsReadOnlyAttribute.h>
#include <Modloader/app/structs/IsReadOnlyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsReadOnlyAttribute {
        inline app::IsReadOnlyAttribute__Class** type_info() {
            static app::IsReadOnlyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsReadOnlyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsReadOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::IsReadOnlyAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "IsReadOnlyAttribute");
        }
        inline app::IsReadOnlyAttribute* create() {
            return il2cpp::create_object<app::IsReadOnlyAttribute>(get_class());
        }
    } // namespace IsReadOnlyAttribute
} // namespace app::classes::types
