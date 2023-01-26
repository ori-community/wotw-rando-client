#pragma once
#include <Modloader/app/structs/LeverDirections__Enum.h>
#include <Modloader/app/structs/LeverDirections__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeverDirections__Enum {
        inline app::LeverDirections__Enum__Class** type_info() {
            static app::LeverDirections__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeverDirections__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeverDirections__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeverDirections__Enum__Class>(type_info(), "", "LeverDirections");
        }
        inline app::LeverDirections__Enum* create() {
            return il2cpp::create_object<app::LeverDirections__Enum>(get_class());
        }
    } // namespace LeverDirections__Enum
} // namespace app::classes::types
