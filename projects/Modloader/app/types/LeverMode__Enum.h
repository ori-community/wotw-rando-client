#pragma once
#include <Modloader/app/structs/LeverMode__Enum.h>
#include <Modloader/app/structs/LeverMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeverMode__Enum {
        inline app::LeverMode__Enum__Class** type_info() {
            static app::LeverMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeverMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeverMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeverMode__Enum__Class>(type_info(), "", "LeverMode");
        }
        inline app::LeverMode__Enum* create() {
            return il2cpp::create_object<app::LeverMode__Enum>(get_class());
        }
    } // namespace LeverMode__Enum
} // namespace app::classes::types
