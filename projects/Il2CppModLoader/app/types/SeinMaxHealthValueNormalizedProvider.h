#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinMaxHealthValueNormalizedProvider {
        namespace {
            inline app::SeinMaxHealthValueNormalizedProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinMaxHealthValueNormalizedProvider__Class** type_info = &type_info_ref;
        inline app::SeinMaxHealthValueNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinMaxHealthValueNormalizedProvider__Class>(type_info, "", "SeinMaxHealthValueNormalizedProvider");
        }
        inline app::SeinMaxHealthValueNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinMaxHealthValueNormalizedProvider>(get_class());
        }
    } // namespace SeinMaxHealthValueNormalizedProvider
} // namespace app::classes::types
