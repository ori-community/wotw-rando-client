#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplaySoundManager_AudioQualitySetting__Enum__Array {
        namespace {
            app::GameplaySoundManager_AudioQualitySetting__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::GameplaySoundManager_AudioQualitySetting__Enum__Array__Class** type_info = &type_info_ref;
        inline app::GameplaySoundManager_AudioQualitySetting__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::GameplaySoundManager_AudioQualitySetting__Enum__Array__Class>(type_info, "", "GameplaySoundManager+AudioQualitySetting[]");
        }
        inline app::GameplaySoundManager_AudioQualitySetting__Enum__Array* create() {
            return il2cpp::create_object<app::GameplaySoundManager_AudioQualitySetting__Enum__Array>(get_class());
        }
    } // namespace GameplaySoundManager_AudioQualitySetting__Enum__Array
} // namespace app::classes::types
