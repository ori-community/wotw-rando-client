#pragma once
#include <Modloader/app/structs/GhostAnimationParameterPlugin_FloatParamenterTracker__Array.h>
#include <Modloader/app/structs/GhostAnimationParameterPlugin_FloatParamenterTracker__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin_FloatParamenterTracker__Array {
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array__Class** type_info() {
            static app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array__Class>(type_info(), "", "GhostAnimationParameterPlugin+FloatParamenterTracker[]");
        }
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array>(get_class());
        }
    } // namespace GhostAnimationParameterPlugin_FloatParamenterTracker__Array
} // namespace app::classes::types
