#pragma once
#include <Modloader/app/structs/UsedImplicitlyAttribute.h>
#include <Modloader/app/structs/UsedImplicitlyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UsedImplicitlyAttribute {
        inline app::UsedImplicitlyAttribute__Class** type_info() {
            static app::UsedImplicitlyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UsedImplicitlyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UsedImplicitlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::UsedImplicitlyAttribute__Class>(type_info(), "JetBrains.Annotations", "UsedImplicitlyAttribute");
        }
        inline app::UsedImplicitlyAttribute* create() {
            return il2cpp::create_object<app::UsedImplicitlyAttribute>(get_class());
        }
    } // namespace UsedImplicitlyAttribute
} // namespace app::classes::types
