#pragma once
#include <Modloader/app/structs/SequencePlatformB_SequencePlatformOnActivatedSettings.h>
#include <Modloader/app/structs/SequencePlatformB_SequencePlatformOnActivatedSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequencePlatformB_SequencePlatformOnActivatedSettings {
        inline app::SequencePlatformB_SequencePlatformOnActivatedSettings__Class** type_info() {
            static app::SequencePlatformB_SequencePlatformOnActivatedSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SequencePlatformB_SequencePlatformOnActivatedSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SequencePlatformB_SequencePlatformOnActivatedSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SequencePlatformB_SequencePlatformOnActivatedSettings__Class>(type_info(), "", "SequencePlatformB", "SequencePlatformOnActivatedSettings");
        }
        inline app::SequencePlatformB_SequencePlatformOnActivatedSettings* create() {
            return il2cpp::create_object<app::SequencePlatformB_SequencePlatformOnActivatedSettings>(get_class());
        }
    } // namespace SequencePlatformB_SequencePlatformOnActivatedSettings
} // namespace app::classes::types
