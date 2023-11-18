#pragma once
#include <Modloader/app/structs/ConstructorBuilder.h>
#include <Modloader/app/structs/ConstructorBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstructorBuilder {
        inline app::ConstructorBuilder__Class** type_info() {
            static app::ConstructorBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConstructorBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConstructorBuilder__Class* get_class() {
            return il2cpp::get_class<app::ConstructorBuilder__Class>(type_info(), "System.Reflection.Emit", "ConstructorBuilder");
        }
        inline app::ConstructorBuilder* create() {
            return il2cpp::create_object<app::ConstructorBuilder>(get_class());
        }
    } // namespace ConstructorBuilder
} // namespace app::classes::types
