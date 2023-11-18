#pragma once
#include <Modloader/app/structs/GenericTypeParameterBuilder.h>
#include <Modloader/app/structs/GenericTypeParameterBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericTypeParameterBuilder {
        inline app::GenericTypeParameterBuilder__Class** type_info() {
            static app::GenericTypeParameterBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericTypeParameterBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericTypeParameterBuilder__Class* get_class() {
            return il2cpp::get_class<app::GenericTypeParameterBuilder__Class>(type_info(), "System.Reflection.Emit", "GenericTypeParameterBuilder");
        }
        inline app::GenericTypeParameterBuilder* create() {
            return il2cpp::create_object<app::GenericTypeParameterBuilder>(get_class());
        }
    } // namespace GenericTypeParameterBuilder
} // namespace app::classes::types
