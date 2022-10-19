#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILever__Array {
        namespace {
            inline app::ILever__Array__Class* type_info_ref = nullptr;
        }
        inline app::ILever__Array__Class** type_info = &type_info_ref;
        inline app::ILever__Array__Class* get_class() {
            return il2cpp::get_class<app::ILever__Array__Class>(type_info, "", "ILever[]");
        }
        inline app::ILever__Array* create() {
            return il2cpp::create_object<app::ILever__Array>(get_class());
        }
    } // namespace ILever__Array
} // namespace app::classes::types
