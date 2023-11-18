#pragma once
#include <Modloader/app/structs/CustomConstantAttribute.h>
#include <Modloader/app/structs/CustomConstantAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomConstantAttribute {
        inline app::CustomConstantAttribute__Class** type_info() {
            static app::CustomConstantAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CustomConstantAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CustomConstantAttribute__Class* get_class() {
            return il2cpp::get_class<app::CustomConstantAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "CustomConstantAttribute");
        }
        inline app::CustomConstantAttribute* create() {
            return il2cpp::create_object<app::CustomConstantAttribute>(get_class());
        }
    } // namespace CustomConstantAttribute
} // namespace app::classes::types
