#pragma once
#include <Modloader/app/structs/SeinExperienceValueNormalizedProvider.h>
#include <Modloader/app/structs/SeinExperienceValueNormalizedProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinExperienceValueNormalizedProvider {
        inline app::SeinExperienceValueNormalizedProvider__Class** type_info() {
            static app::SeinExperienceValueNormalizedProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinExperienceValueNormalizedProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinExperienceValueNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinExperienceValueNormalizedProvider__Class>(type_info(), "", "SeinExperienceValueNormalizedProvider");
        }
        inline app::SeinExperienceValueNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinExperienceValueNormalizedProvider>(get_class());
        }
    } // namespace SeinExperienceValueNormalizedProvider
} // namespace app::classes::types
