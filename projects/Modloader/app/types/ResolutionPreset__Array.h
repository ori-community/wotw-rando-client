#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ResolutionPreset__Array__Class.h>
#include <Modloader/app/structs/ResolutionPreset__Array.h>

namespace app::classes::types {
    namespace ResolutionPreset__Array {
        namespace {
            inline app::ResolutionPreset__Array__Class* type_info_ref = nullptr;
        }
        inline app::ResolutionPreset__Array__Class** type_info = &type_info_ref;
        inline app::ResolutionPreset__Array__Class* get_class() {
            return il2cpp::get_class<app::ResolutionPreset__Array__Class>(type_info, "Moon.ArtOptimization", "ResolutionPreset[]");
        }
        inline app::ResolutionPreset__Array* create() {
            return il2cpp::create_object<app::ResolutionPreset__Array>(get_class());
        }
    } // namespace ResolutionPreset__Array
} // namespace app::classes::types
