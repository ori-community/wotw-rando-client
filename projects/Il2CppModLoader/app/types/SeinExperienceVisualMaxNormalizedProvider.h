#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinExperienceVisualMaxNormalizedProvider {
        namespace {
            app::SeinExperienceVisualMaxNormalizedProvider__Class* type_info_ref = nullptr;
        }
        app::SeinExperienceVisualMaxNormalizedProvider__Class** type_info = &type_info_ref;
        inline app::SeinExperienceVisualMaxNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinExperienceVisualMaxNormalizedProvider__Class>(type_info, "", "SeinExperienceVisualMaxNormalizedProvider");
        }
        inline app::SeinExperienceVisualMaxNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinExperienceVisualMaxNormalizedProvider>(get_class());
        }
    } // namespace SeinExperienceVisualMaxNormalizedProvider
} // namespace app::classes::types
