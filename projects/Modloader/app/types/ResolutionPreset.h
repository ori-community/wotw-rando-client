#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResolutionPreset {
        inline app::ResolutionPreset__Class** type_info = (app::ResolutionPreset__Class**)(modloader::win::memory::resolve_rva(0x04770638));
        inline app::ResolutionPreset__Class* get_class() {
            return il2cpp::get_class<app::ResolutionPreset__Class>(type_info, "Moon.ArtOptimization", "ResolutionPreset");
        }
        inline app::ResolutionPreset* create() {
            return il2cpp::create_object<app::ResolutionPreset>(get_class());
        }
        inline app::ResolutionPreset__Array* create_array(int size) {
            return il2cpp::array_new<app::ResolutionPreset__Array>(get_class(), size);
        }
        inline app::ResolutionPreset__Array* create_array(const std::vector<app::ResolutionPreset*>& items) {
            return il2cpp::array_new<app::ResolutionPreset__Array>(get_class(), items);
        }
    } // namespace ResolutionPreset
} // namespace app::classes::types
