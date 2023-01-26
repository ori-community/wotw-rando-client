#pragma once
#include <Modloader/app/structs/SeinExperienceVisualMaxNormalizedProvider.h>
#include <Modloader/app/structs/SeinExperienceVisualMaxNormalizedProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinExperienceVisualMaxNormalizedProvider {
        inline app::SeinExperienceVisualMaxNormalizedProvider__Class** type_info() {
            static app::SeinExperienceVisualMaxNormalizedProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinExperienceVisualMaxNormalizedProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinExperienceVisualMaxNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinExperienceVisualMaxNormalizedProvider__Class>(type_info(), "", "SeinExperienceVisualMaxNormalizedProvider");
        }
        inline app::SeinExperienceVisualMaxNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinExperienceVisualMaxNormalizedProvider>(get_class());
        }
    } // namespace SeinExperienceVisualMaxNormalizedProvider
} // namespace app::classes::types
