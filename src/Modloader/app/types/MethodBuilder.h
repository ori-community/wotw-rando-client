#pragma once
#include <Modloader/app/structs/MethodBuilder.h>
#include <Modloader/app/structs/MethodBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodBuilder {
        inline app::MethodBuilder__Class** type_info() {
            static app::MethodBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MethodBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MethodBuilder__Class* get_class() {
            return il2cpp::get_class<app::MethodBuilder__Class>(type_info(), "System.Reflection.Emit", "MethodBuilder");
        }
        inline app::MethodBuilder* create() {
            return il2cpp::create_object<app::MethodBuilder>(get_class());
        }
    } // namespace MethodBuilder
} // namespace app::classes::types
