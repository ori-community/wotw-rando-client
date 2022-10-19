#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinExperienceValueProvider {
        namespace {
            inline app::SeinExperienceValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinExperienceValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinExperienceValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinExperienceValueProvider__Class>(type_info, "", "SeinExperienceValueProvider");
        }
        inline app::SeinExperienceValueProvider* create() {
            return il2cpp::create_object<app::SeinExperienceValueProvider>(get_class());
        }
    } // namespace SeinExperienceValueProvider
} // namespace app::classes::types
