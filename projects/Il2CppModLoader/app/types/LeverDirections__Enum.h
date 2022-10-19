#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeverDirections__Enum {
        namespace {
            inline app::LeverDirections__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LeverDirections__Enum__Class** type_info = &type_info_ref;
        inline app::LeverDirections__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeverDirections__Enum__Class>(type_info, "", "LeverDirections");
        }
        inline app::LeverDirections__Enum* create() {
            return il2cpp::create_object<app::LeverDirections__Enum>(get_class());
        }
    } // namespace LeverDirections__Enum
} // namespace app::classes::types
