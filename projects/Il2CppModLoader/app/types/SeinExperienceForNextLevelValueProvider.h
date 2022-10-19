#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinExperienceForNextLevelValueProvider {
        namespace {
            inline app::SeinExperienceForNextLevelValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinExperienceForNextLevelValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinExperienceForNextLevelValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinExperienceForNextLevelValueProvider__Class>(type_info, "", "SeinExperienceForNextLevelValueProvider");
        }
        inline app::SeinExperienceForNextLevelValueProvider* create() {
            return il2cpp::create_object<app::SeinExperienceForNextLevelValueProvider>(get_class());
        }
    } // namespace SeinExperienceForNextLevelValueProvider
} // namespace app::classes::types
