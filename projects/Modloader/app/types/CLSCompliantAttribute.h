#pragma once
#include <Modloader/app/structs/CLSCompliantAttribute.h>
#include <Modloader/app/structs/CLSCompliantAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CLSCompliantAttribute {
        inline app::CLSCompliantAttribute__Class** type_info() {
            static app::CLSCompliantAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CLSCompliantAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CLSCompliantAttribute__Class* get_class() {
            return il2cpp::get_class<app::CLSCompliantAttribute__Class>(type_info(), "System", "CLSCompliantAttribute");
        }
        inline app::CLSCompliantAttribute* create() {
            return il2cpp::create_object<app::CLSCompliantAttribute>(get_class());
        }
    } // namespace CLSCompliantAttribute
} // namespace app::classes::types
