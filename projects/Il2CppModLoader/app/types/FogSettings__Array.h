#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FogSettings__Array {
        namespace {
            inline app::FogSettings__Array__Class* type_info_ref = nullptr;
        }
        inline app::FogSettings__Array__Class** type_info = &type_info_ref;
        inline app::FogSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::FogSettings__Array__Class>(type_info, "", "FogSettings[]");
        }
        inline app::FogSettings__Array* create() {
            return il2cpp::create_object<app::FogSettings__Array>(get_class());
        }
    } // namespace FogSettings__Array
} // namespace app::classes::types
