#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConditionBasedSoundProvider {
        namespace {
            app::ConditionBasedSoundProvider__Class* type_info_ref = nullptr;
        }
        app::ConditionBasedSoundProvider__Class** type_info = &type_info_ref;
        inline app::ConditionBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::ConditionBasedSoundProvider__Class>(type_info, "", "ConditionBasedSoundProvider");
        }
        inline app::ConditionBasedSoundProvider* create() {
            return il2cpp::create_object<app::ConditionBasedSoundProvider>(get_class());
        }
    } // namespace ConditionBasedSoundProvider
} // namespace app::classes::types
