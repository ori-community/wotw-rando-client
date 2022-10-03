#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin_VectorParamenterTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostAnimationParameterPlugin_VectorParamenterTracker__Class** type_info;
        inline app::GhostAnimationParameterPlugin_VectorParamenterTracker__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostAnimationParameterPlugin_VectorParamenterTracker__Class>(type_info, "", "GhostAnimationParameterPlugin", "VectorParamenterTracker");
        }
        inline app::GhostAnimationParameterPlugin_VectorParamenterTracker* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin_VectorParamenterTracker>(get_class());
        }
        inline app::GhostAnimationParameterPlugin_VectorParamenterTracker__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostAnimationParameterPlugin_VectorParamenterTracker__Array>(get_class(), size);
        }
    } // namespace GhostAnimationParameterPlugin_VectorParamenterTracker
} // namespace app::classes::types
