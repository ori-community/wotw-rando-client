#pragma once
#include <Modloader/app/structs/GeneratedCodeAttribute.h>
#include <Modloader/app/structs/GeneratedCodeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GeneratedCodeAttribute {
        inline app::GeneratedCodeAttribute__Class** type_info() {
            static app::GeneratedCodeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GeneratedCodeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GeneratedCodeAttribute__Class* get_class() {
            return il2cpp::get_class<app::GeneratedCodeAttribute__Class>(type_info(), "System.CodeDom.Compiler", "GeneratedCodeAttribute");
        }
        inline app::GeneratedCodeAttribute* create() {
            return il2cpp::create_object<app::GeneratedCodeAttribute>(get_class());
        }
    } // namespace GeneratedCodeAttribute
} // namespace app::classes::types
