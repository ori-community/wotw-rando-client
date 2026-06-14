#pragma once
#include <Modloader/app/structs/ParameterBuilder.h>
#include <Modloader/app/structs/ParameterBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParameterBuilder {
        inline app::ParameterBuilder__Class** type_info() {
            static app::ParameterBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParameterBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParameterBuilder__Class* get_class() {
            return il2cpp::get_class<app::ParameterBuilder__Class>(type_info(), "System.Reflection.Emit", "ParameterBuilder");
        }
        inline app::ParameterBuilder* create() {
            return il2cpp::create_object<app::ParameterBuilder>(get_class());
        }
    } // namespace ParameterBuilder
} // namespace app::classes::types
