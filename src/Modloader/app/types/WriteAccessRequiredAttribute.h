#pragma once
#include <Modloader/app/structs/WriteAccessRequiredAttribute.h>
#include <Modloader/app/structs/WriteAccessRequiredAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteAccessRequiredAttribute {
        inline app::WriteAccessRequiredAttribute__Class** type_info() {
            static app::WriteAccessRequiredAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WriteAccessRequiredAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WriteAccessRequiredAttribute__Class* get_class() {
            return il2cpp::get_class<app::WriteAccessRequiredAttribute__Class>(type_info(), "Unity.Collections.LowLevel.Unsafe", "WriteAccessRequiredAttribute");
        }
        inline app::WriteAccessRequiredAttribute* create() {
            return il2cpp::create_object<app::WriteAccessRequiredAttribute>(get_class());
        }
    } // namespace WriteAccessRequiredAttribute
} // namespace app::classes::types
