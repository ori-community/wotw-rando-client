#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioSourceCurveType__Enum {
        namespace {
            app::AudioSourceCurveType__Enum__Class* type_info_ref = nullptr;
        }
        app::AudioSourceCurveType__Enum__Class** type_info = &type_info_ref;
        inline app::AudioSourceCurveType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioSourceCurveType__Enum__Class>(type_info, "UnityEngine", "AudioSourceCurveType");
        }
        inline app::AudioSourceCurveType__Enum* create() {
            return il2cpp::create_object<app::AudioSourceCurveType__Enum>(get_class());
        }
    } // namespace AudioSourceCurveType__Enum
} // namespace app::classes::types
