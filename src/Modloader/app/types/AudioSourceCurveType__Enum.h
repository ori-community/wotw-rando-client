#pragma once
#include <Modloader/app/structs/AudioSourceCurveType__Enum.h>
#include <Modloader/app/structs/AudioSourceCurveType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioSourceCurveType__Enum {
        inline app::AudioSourceCurveType__Enum__Class** type_info() {
            static app::AudioSourceCurveType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioSourceCurveType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioSourceCurveType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioSourceCurveType__Enum__Class>(type_info(), "UnityEngine", "AudioSourceCurveType");
        }
        inline app::AudioSourceCurveType__Enum* create() {
            return il2cpp::create_object<app::AudioSourceCurveType__Enum>(get_class());
        }
    } // namespace AudioSourceCurveType__Enum
} // namespace app::classes::types
