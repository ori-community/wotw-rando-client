#pragma once
#include <Modloader/app/structs/EnumBuilder.h>
#include <Modloader/app/structs/EnumBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnumBuilder {
        inline app::EnumBuilder__Class** type_info() {
            static app::EnumBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnumBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnumBuilder__Class* get_class() {
            return il2cpp::get_class<app::EnumBuilder__Class>(type_info(), "System.Reflection.Emit", "EnumBuilder");
        }
        inline app::EnumBuilder* create() {
            return il2cpp::create_object<app::EnumBuilder>(get_class());
        }
    } // namespace EnumBuilder
} // namespace app::classes::types
