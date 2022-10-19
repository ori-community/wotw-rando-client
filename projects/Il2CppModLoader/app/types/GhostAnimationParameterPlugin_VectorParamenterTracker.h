#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin_VectorParamenterTracker {
        inline app::GhostAnimationParameterPlugin_VectorParamenterTracker__Class** type_info = (app::GhostAnimationParameterPlugin_VectorParamenterTracker__Class**)(modloader::win::memory::resolve_rva(0x0478A808));
        inline app::GhostAnimationParameterPlugin_VectorParamenterTracker__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostAnimationParameterPlugin_VectorParamenterTracker__Class>(type_info, "", "GhostAnimationParameterPlugin", "VectorParamenterTracker");
        }
        inline app::GhostAnimationParameterPlugin_VectorParamenterTracker* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin_VectorParamenterTracker>(get_class());
        }
        inline app::GhostAnimationParameterPlugin_VectorParamenterTracker__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostAnimationParameterPlugin_VectorParamenterTracker__Array>(get_class(), size);
        }
        inline app::GhostAnimationParameterPlugin_VectorParamenterTracker__Array* create_array(const std::vector<app::GhostAnimationParameterPlugin_VectorParamenterTracker*>& items) {
            return il2cpp::array_new<app::GhostAnimationParameterPlugin_VectorParamenterTracker__Array>(get_class(), items);
        }
    } // namespace GhostAnimationParameterPlugin_VectorParamenterTracker
} // namespace app::classes::types
