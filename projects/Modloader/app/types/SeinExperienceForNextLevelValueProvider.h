#pragma once
#include <Modloader/app/structs/SeinExperienceForNextLevelValueProvider.h>
#include <Modloader/app/structs/SeinExperienceForNextLevelValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinExperienceForNextLevelValueProvider {
        inline app::SeinExperienceForNextLevelValueProvider__Class** type_info() {
            static app::SeinExperienceForNextLevelValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinExperienceForNextLevelValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinExperienceForNextLevelValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinExperienceForNextLevelValueProvider__Class>(type_info(), "", "SeinExperienceForNextLevelValueProvider");
        }
        inline app::SeinExperienceForNextLevelValueProvider* create() {
            return il2cpp::create_object<app::SeinExperienceForNextLevelValueProvider>(get_class());
        }
    } // namespace SeinExperienceForNextLevelValueProvider
} // namespace app::classes::types
