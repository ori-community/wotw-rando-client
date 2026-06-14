#pragma once
#include <Modloader/app/structs/SequencePlatformB_SequencePlatformOnTouchSettings.h>
#include <Modloader/app/structs/SequencePlatformB_SequencePlatformOnTouchSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequencePlatformB_SequencePlatformOnTouchSettings {
        inline app::SequencePlatformB_SequencePlatformOnTouchSettings__Class** type_info() {
            static app::SequencePlatformB_SequencePlatformOnTouchSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SequencePlatformB_SequencePlatformOnTouchSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SequencePlatformB_SequencePlatformOnTouchSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SequencePlatformB_SequencePlatformOnTouchSettings__Class>(type_info(), "", "SequencePlatformB", "SequencePlatformOnTouchSettings");
        }
        inline app::SequencePlatformB_SequencePlatformOnTouchSettings* create() {
            return il2cpp::create_object<app::SequencePlatformB_SequencePlatformOnTouchSettings>(get_class());
        }
    } // namespace SequencePlatformB_SequencePlatformOnTouchSettings
} // namespace app::classes::types
