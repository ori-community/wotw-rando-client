#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin_FloatParamenterTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostAnimationParameterPlugin_FloatParamenterTracker__Class** type_info;
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostAnimationParameterPlugin_FloatParamenterTracker__Class>(type_info, "", "GhostAnimationParameterPlugin", "FloatParamenterTracker");
        }
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin_FloatParamenterTracker>(get_class());
        }
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array>(get_class(), size);
        }
    } // namespace GhostAnimationParameterPlugin_FloatParamenterTracker
} // namespace app::classes::types
