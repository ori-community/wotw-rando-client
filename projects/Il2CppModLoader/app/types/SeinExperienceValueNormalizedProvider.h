#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinExperienceValueNormalizedProvider {
        namespace {
            app::SeinExperienceValueNormalizedProvider__Class* type_info_ref = nullptr;
        }
        app::SeinExperienceValueNormalizedProvider__Class** type_info = &type_info_ref;
        inline app::SeinExperienceValueNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinExperienceValueNormalizedProvider__Class>(type_info, "", "SeinExperienceValueNormalizedProvider");
        }
        inline app::SeinExperienceValueNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinExperienceValueNormalizedProvider>(get_class());
        }
    } // namespace SeinExperienceValueNormalizedProvider
} // namespace app::classes::types
