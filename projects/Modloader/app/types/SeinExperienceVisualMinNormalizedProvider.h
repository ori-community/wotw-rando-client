#pragma once
#include <Modloader/app/structs/SeinExperienceVisualMinNormalizedProvider.h>
#include <Modloader/app/structs/SeinExperienceVisualMinNormalizedProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinExperienceVisualMinNormalizedProvider {
        inline app::SeinExperienceVisualMinNormalizedProvider__Class** type_info() {
            static app::SeinExperienceVisualMinNormalizedProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinExperienceVisualMinNormalizedProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinExperienceVisualMinNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinExperienceVisualMinNormalizedProvider__Class>(type_info(), "", "SeinExperienceVisualMinNormalizedProvider");
        }
        inline app::SeinExperienceVisualMinNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinExperienceVisualMinNormalizedProvider>(get_class());
        }
    } // namespace SeinExperienceVisualMinNormalizedProvider
} // namespace app::classes::types
