#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICarryable__Array {
        namespace {
            inline app::ICarryable__Array__Class* type_info_ref = nullptr;
        }
        inline app::ICarryable__Array__Class** type_info = &type_info_ref;
        inline app::ICarryable__Array__Class* get_class() {
            return il2cpp::get_class<app::ICarryable__Array__Class>(type_info, "", "ICarryable[]");
        }
        inline app::ICarryable__Array* create() {
            return il2cpp::create_object<app::ICarryable__Array>(get_class());
        }
    } // namespace ICarryable__Array
} // namespace app::classes::types
