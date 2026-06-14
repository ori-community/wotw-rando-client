#pragma once
#include <Modloader/app/structs/FieldBuilder.h>
#include <Modloader/app/structs/FieldBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FieldBuilder {
        inline app::FieldBuilder__Class** type_info() {
            static app::FieldBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FieldBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FieldBuilder__Class* get_class() {
            return il2cpp::get_class<app::FieldBuilder__Class>(type_info(), "System.Reflection.Emit", "FieldBuilder");
        }
        inline app::FieldBuilder* create() {
            return il2cpp::create_object<app::FieldBuilder>(get_class());
        }
    } // namespace FieldBuilder
} // namespace app::classes::types
