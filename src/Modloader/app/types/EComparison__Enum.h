#pragma once
#include <Modloader/app/structs/EComparison__Enum.h>
#include <Modloader/app/structs/EComparison__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EComparison__Enum {
        inline app::EComparison__Enum__Class** type_info() {
            static app::EComparison__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EComparison__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EComparison__Enum__Class* get_class() {
            return il2cpp::get_class<app::EComparison__Enum__Class>(type_info(), "System.Data.SqlTypes", "EComparison");
        }
        inline app::EComparison__Enum* create() {
            return il2cpp::create_object<app::EComparison__Enum>(get_class());
        }
    } // namespace EComparison__Enum
} // namespace app::classes::types
