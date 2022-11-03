#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin_VectorParamenterTracker__Array {
        namespace {
            inline app::GhostAnimationParameterPlugin_VectorParamenterTracker__Array__Class* type_info_ref = nullptr;
        }
        inline app::GhostAnimationParameterPlugin_VectorParamenterTracker__Array__Class** type_info = &type_info_ref;
        inline app::GhostAnimationParameterPlugin_VectorParamenterTracker__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostAnimationParameterPlugin_VectorParamenterTracker__Array__Class>(type_info, "", "GhostAnimationParameterPlugin+VectorParamenterTracker[]");
        }
        inline app::GhostAnimationParameterPlugin_VectorParamenterTracker__Array* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin_VectorParamenterTracker__Array>(get_class());
        }
    } // namespace GhostAnimationParameterPlugin_VectorParamenterTracker__Array
} // namespace app::classes::types
