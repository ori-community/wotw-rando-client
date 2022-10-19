#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimatorBootstrapper {
        namespace {
            inline app::MoonAnimatorBootstrapper__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimatorBootstrapper__Class** type_info = &type_info_ref;
        inline app::MoonAnimatorBootstrapper__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorBootstrapper__Class>(type_info, "Moon", "MoonAnimatorBootstrapper");
        }
        inline app::MoonAnimatorBootstrapper* create() {
            return il2cpp::create_object<app::MoonAnimatorBootstrapper>(get_class());
        }
    } // namespace MoonAnimatorBootstrapper
} // namespace app::classes::types
