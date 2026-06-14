#pragma once
#include <Modloader/app/structs/SeinExperienceValueProvider.h>
#include <Modloader/app/structs/SeinExperienceValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinExperienceValueProvider {
        inline app::SeinExperienceValueProvider__Class** type_info() {
            static app::SeinExperienceValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinExperienceValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinExperienceValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinExperienceValueProvider__Class>(type_info(), "", "SeinExperienceValueProvider");
        }
        inline app::SeinExperienceValueProvider* create() {
            return il2cpp::create_object<app::SeinExperienceValueProvider>(get_class());
        }
    } // namespace SeinExperienceValueProvider
} // namespace app::classes::types
