#pragma once
#include <Modloader/app/structs/FreeFunctionAttribute.h>
#include <Modloader/app/structs/FreeFunctionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FreeFunctionAttribute {
        inline app::FreeFunctionAttribute__Class** type_info() {
            static app::FreeFunctionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FreeFunctionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FreeFunctionAttribute__Class* get_class() {
            return il2cpp::get_class<app::FreeFunctionAttribute__Class>(type_info(), "UnityEngine.Bindings", "FreeFunctionAttribute");
        }
        inline app::FreeFunctionAttribute* create() {
            return il2cpp::create_object<app::FreeFunctionAttribute>(get_class());
        }
    } // namespace FreeFunctionAttribute
} // namespace app::classes::types
