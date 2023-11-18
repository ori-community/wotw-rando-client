#pragma once
#include <Modloader/app/structs/EPlayerResult_t__Enum.h>
#include <Modloader/app/structs/EPlayerResult_t__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EPlayerResult_t__Enum {
        inline app::EPlayerResult_t__Enum__Class** type_info() {
            static app::EPlayerResult_t__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EPlayerResult_t__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EPlayerResult_t__Enum__Class* get_class() {
            return il2cpp::get_class<app::EPlayerResult_t__Enum__Class>(type_info(), "Steamworks", "EPlayerResult_t");
        }
        inline app::EPlayerResult_t__Enum* create() {
            return il2cpp::create_object<app::EPlayerResult_t__Enum>(get_class());
        }
    } // namespace EPlayerResult_t__Enum
} // namespace app::classes::types
