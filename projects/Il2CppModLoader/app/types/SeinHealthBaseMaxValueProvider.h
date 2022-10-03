#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinHealthBaseMaxValueProvider {
        namespace {
            app::SeinHealthBaseMaxValueProvider__Class* type_info_ref = nullptr;
        }
        app::SeinHealthBaseMaxValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinHealthBaseMaxValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthBaseMaxValueProvider__Class>(type_info, "", "SeinHealthBaseMaxValueProvider");
        }
        inline app::SeinHealthBaseMaxValueProvider* create() {
            return il2cpp::create_object<app::SeinHealthBaseMaxValueProvider>(get_class());
        }
    } // namespace SeinHealthBaseMaxValueProvider
} // namespace app::classes::types
