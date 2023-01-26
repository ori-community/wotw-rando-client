#pragma once
#include <Modloader/app/structs/ResolutionPreset__Array.h>
#include <Modloader/app/structs/ResolutionPreset__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResolutionPreset__Array {
        inline app::ResolutionPreset__Array__Class** type_info() {
            static app::ResolutionPreset__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResolutionPreset__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResolutionPreset__Array__Class* get_class() {
            return il2cpp::get_class<app::ResolutionPreset__Array__Class>(type_info(), "Moon.ArtOptimization", "ResolutionPreset[]");
        }
        inline app::ResolutionPreset__Array* create() {
            return il2cpp::create_object<app::ResolutionPreset__Array>(get_class());
        }
    } // namespace ResolutionPreset__Array
} // namespace app::classes::types
