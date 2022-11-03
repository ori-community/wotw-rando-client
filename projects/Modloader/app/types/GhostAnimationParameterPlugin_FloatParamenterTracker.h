#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin_FloatParamenterTracker {
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker__Class** type_info = (app::GhostAnimationParameterPlugin_FloatParamenterTracker__Class**)(modloader::win::memory::resolve_rva(0x04710440));
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostAnimationParameterPlugin_FloatParamenterTracker__Class>(type_info, "", "GhostAnimationParameterPlugin", "FloatParamenterTracker");
        }
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin_FloatParamenterTracker>(get_class());
        }
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array>(get_class(), size);
        }
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array* create_array(const std::vector<app::GhostAnimationParameterPlugin_FloatParamenterTracker*>& items) {
            return il2cpp::array_new<app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array>(get_class(), items);
        }
    } // namespace GhostAnimationParameterPlugin_FloatParamenterTracker
} // namespace app::classes::types
