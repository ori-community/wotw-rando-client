#pragma once
#include <Modloader/app/structs/NullableConverter.h>
#include <Modloader/app/structs/NullableConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NullableConverter {
        inline app::NullableConverter__Class** type_info() {
            static app::NullableConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NullableConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NullableConverter__Class* get_class() {
            return il2cpp::get_class<app::NullableConverter__Class>(type_info(), "System.ComponentModel", "NullableConverter");
        }
        inline app::NullableConverter* create() {
            return il2cpp::create_object<app::NullableConverter>(get_class());
        }
    } // namespace NullableConverter
} // namespace app::classes::types
