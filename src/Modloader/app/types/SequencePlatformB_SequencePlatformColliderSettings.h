#pragma once
#include <Modloader/app/structs/SequencePlatformB_SequencePlatformColliderSettings.h>
#include <Modloader/app/structs/SequencePlatformB_SequencePlatformColliderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequencePlatformB_SequencePlatformColliderSettings {
        inline app::SequencePlatformB_SequencePlatformColliderSettings__Class** type_info() {
            static app::SequencePlatformB_SequencePlatformColliderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SequencePlatformB_SequencePlatformColliderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SequencePlatformB_SequencePlatformColliderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SequencePlatformB_SequencePlatformColliderSettings__Class>(type_info(), "", "SequencePlatformB", "SequencePlatformColliderSettings");
        }
        inline app::SequencePlatformB_SequencePlatformColliderSettings* create() {
            return il2cpp::create_object<app::SequencePlatformB_SequencePlatformColliderSettings>(get_class());
        }
    } // namespace SequencePlatformB_SequencePlatformColliderSettings
} // namespace app::classes::types
