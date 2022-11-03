#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLayers {
        inline app::SceneLayers__Class** type_info = (app::SceneLayers__Class**)(modloader::win::memory::resolve_rva(0x04759848));
        inline app::SceneLayers__Class* get_class() {
            return il2cpp::get_class<app::SceneLayers__Class>(type_info, "", "SceneLayers");
        }
        inline app::SceneLayers* create() {
            return il2cpp::create_object<app::SceneLayers>(get_class());
        }
    } // namespace SceneLayers
} // namespace app::classes::types
