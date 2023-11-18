#pragma once
#include <Modloader/app/structs/TypeListConverter.h>
#include <Modloader/app/structs/TypeListConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeListConverter {
        inline app::TypeListConverter__Class** type_info() {
            static app::TypeListConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeListConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeListConverter__Class* get_class() {
            return il2cpp::get_class<app::TypeListConverter__Class>(type_info(), "System.ComponentModel", "TypeListConverter");
        }
        inline app::TypeListConverter* create() {
            return il2cpp::create_object<app::TypeListConverter>(get_class());
        }
    } // namespace TypeListConverter
} // namespace app::classes::types
