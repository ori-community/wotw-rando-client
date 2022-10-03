#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinMaxHealthValueProvider {
        namespace {
            app::SeinMaxHealthValueProvider__Class* type_info_ref = nullptr;
        }
        app::SeinMaxHealthValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinMaxHealthValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinMaxHealthValueProvider__Class>(type_info, "", "SeinMaxHealthValueProvider");
        }
        inline app::SeinMaxHealthValueProvider* create() {
            return il2cpp::create_object<app::SeinMaxHealthValueProvider>(get_class());
        }
    } // namespace SeinMaxHealthValueProvider
} // namespace app::classes::types
