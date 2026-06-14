#pragma once
#include <Modloader/app/structs/DefaultParameterValueAttribute.h>
#include <Modloader/app/structs/DefaultParameterValueAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultParameterValueAttribute {
        inline app::DefaultParameterValueAttribute__Class** type_info() {
            static app::DefaultParameterValueAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DefaultParameterValueAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DefaultParameterValueAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultParameterValueAttribute__Class>(type_info(), "System.Runtime.InteropServices", "DefaultParameterValueAttribute");
        }
        inline app::DefaultParameterValueAttribute* create() {
            return il2cpp::create_object<app::DefaultParameterValueAttribute>(get_class());
        }
    } // namespace DefaultParameterValueAttribute
} // namespace app::classes::types
