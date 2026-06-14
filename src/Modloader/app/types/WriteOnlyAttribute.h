#pragma once
#include <Modloader/app/structs/WriteOnlyAttribute.h>
#include <Modloader/app/structs/WriteOnlyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteOnlyAttribute {
        inline app::WriteOnlyAttribute__Class** type_info() {
            static app::WriteOnlyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WriteOnlyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WriteOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::WriteOnlyAttribute__Class>(type_info(), "Unity.Collections", "WriteOnlyAttribute");
        }
        inline app::WriteOnlyAttribute* create() {
            return il2cpp::create_object<app::WriteOnlyAttribute>(get_class());
        }
    } // namespace WriteOnlyAttribute
} // namespace app::classes::types
