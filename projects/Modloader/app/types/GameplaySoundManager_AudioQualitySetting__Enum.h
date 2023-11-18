#pragma once
#include <Modloader/app/structs/GameplaySoundManager_AudioQualitySetting__Enum.h>
#include <Modloader/app/structs/GameplaySoundManager_AudioQualitySetting__Enum__Array.h>
#include <Modloader/app/structs/GameplaySoundManager_AudioQualitySetting__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameplaySoundManager_AudioQualitySetting__Enum {
        inline app::GameplaySoundManager_AudioQualitySetting__Enum__Class** type_info() {
            static app::GameplaySoundManager_AudioQualitySetting__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameplaySoundManager_AudioQualitySetting__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameplaySoundManager_AudioQualitySetting__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GameplaySoundManager_AudioQualitySetting__Enum__Class>(type_info(), "", "GameplaySoundManager", "AudioQualitySetting");
        }
        inline app::GameplaySoundManager_AudioQualitySetting__Enum* create() {
            return il2cpp::create_object<app::GameplaySoundManager_AudioQualitySetting__Enum>(get_class());
        }
        inline app::GameplaySoundManager_AudioQualitySetting__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::GameplaySoundManager_AudioQualitySetting__Enum__Array>(get_class(), size);
        }
        inline app::GameplaySoundManager_AudioQualitySetting__Enum__Array* create_array(const std::vector<app::GameplaySoundManager_AudioQualitySetting__Enum*>& items) {
            return il2cpp::array_new<app::GameplaySoundManager_AudioQualitySetting__Enum__Array>(get_class(), items);
        }
    } // namespace GameplaySoundManager_AudioQualitySetting__Enum
} // namespace app::classes::types
