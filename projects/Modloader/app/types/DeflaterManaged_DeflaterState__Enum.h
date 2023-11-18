#pragma once
#include <Modloader/app/structs/DeflaterManaged_DeflaterState__Enum.h>
#include <Modloader/app/structs/DeflaterManaged_DeflaterState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeflaterManaged_DeflaterState__Enum {
        inline app::DeflaterManaged_DeflaterState__Enum__Class** type_info() {
            static app::DeflaterManaged_DeflaterState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeflaterManaged_DeflaterState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeflaterManaged_DeflaterState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflaterManaged_DeflaterState__Enum__Class>(type_info(), "Unity.IO.Compression", "DeflaterManaged", "DeflaterState");
        }
        inline app::DeflaterManaged_DeflaterState__Enum* create() {
            return il2cpp::create_object<app::DeflaterManaged_DeflaterState__Enum>(get_class());
        }
    } // namespace DeflaterManaged_DeflaterState__Enum
} // namespace app::classes::types
