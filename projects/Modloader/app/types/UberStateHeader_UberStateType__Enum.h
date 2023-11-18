#pragma once
#include <Modloader/app/structs/UberStateHeader_UberStateType__Enum.h>
#include <Modloader/app/structs/UberStateHeader_UberStateType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateHeader_UberStateType__Enum {
        inline app::UberStateHeader_UberStateType__Enum__Class** type_info() {
            static app::UberStateHeader_UberStateType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateHeader_UberStateType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateHeader_UberStateType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateHeader_UberStateType__Enum__Class>(type_info(), "Moon", "UberStateHeader", "UberStateType");
        }
        inline app::UberStateHeader_UberStateType__Enum* create() {
            return il2cpp::create_object<app::UberStateHeader_UberStateType__Enum>(get_class());
        }
    } // namespace UberStateHeader_UberStateType__Enum
} // namespace app::classes::types
