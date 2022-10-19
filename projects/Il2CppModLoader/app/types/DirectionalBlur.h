#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DirectionalBlur {
        namespace {
            inline app::DirectionalBlur__Class* type_info_ref = nullptr;
        }
        inline app::DirectionalBlur__Class** type_info = &type_info_ref;
        inline app::DirectionalBlur__Class* get_class() {
            return il2cpp::get_class<app::DirectionalBlur__Class>(type_info, "Colorful", "DirectionalBlur");
        }
        inline app::DirectionalBlur* create() {
            return il2cpp::create_object<app::DirectionalBlur>(get_class());
        }
    } // namespace DirectionalBlur
} // namespace app::classes::types
