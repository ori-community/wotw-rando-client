#pragma once
#include <Modloader/app/structs/ConditionBasedSoundProvider.h>
#include <Modloader/app/structs/ConditionBasedSoundProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionBasedSoundProvider {
        inline app::ConditionBasedSoundProvider__Class** type_info() {
            static app::ConditionBasedSoundProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionBasedSoundProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::ConditionBasedSoundProvider__Class>(type_info(), "", "ConditionBasedSoundProvider");
        }
        inline app::ConditionBasedSoundProvider* create() {
            return il2cpp::create_object<app::ConditionBasedSoundProvider>(get_class());
        }
    } // namespace ConditionBasedSoundProvider
} // namespace app::classes::types
