#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EPlayerResult_t__Enum {
        namespace {
            app::EPlayerResult_t__Enum__Class* type_info_ref = nullptr;
        }
        app::EPlayerResult_t__Enum__Class** type_info = &type_info_ref;
        inline app::EPlayerResult_t__Enum__Class* get_class() {
            return il2cpp::get_class<app::EPlayerResult_t__Enum__Class>(type_info, "Steamworks", "EPlayerResult_t");
        }
        inline app::EPlayerResult_t__Enum* create() {
            return il2cpp::create_object<app::EPlayerResult_t__Enum>(get_class());
        }
    } // namespace EPlayerResult_t__Enum
} // namespace app::classes::types
