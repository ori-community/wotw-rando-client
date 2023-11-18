#pragma once
#include <Modloader/app/structs/LocalBuilder.h>
#include <Modloader/app/structs/LocalBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalBuilder {
        inline app::LocalBuilder__Class** type_info() {
            static app::LocalBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocalBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocalBuilder__Class* get_class() {
            return il2cpp::get_class<app::LocalBuilder__Class>(type_info(), "System.Reflection.Emit", "LocalBuilder");
        }
        inline app::LocalBuilder* create() {
            return il2cpp::create_object<app::LocalBuilder>(get_class());
        }
    } // namespace LocalBuilder
} // namespace app::classes::types
