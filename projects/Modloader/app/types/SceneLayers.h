#pragma once
#include <Modloader/app/structs/SceneLayers.h>
#include <Modloader/app/structs/SceneLayers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLayers {
        inline app::SceneLayers__Class** type_info() {
            static app::SceneLayers__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneLayers__Class**)(modloader::win::memory::resolve_rva(0x04759848));
            }
            return cache;
        }
        inline app::SceneLayers__Class* get_class() {
            return il2cpp::get_class<app::SceneLayers__Class>(type_info(), "", "SceneLayers");
        }
        inline app::SceneLayers* create() {
            return il2cpp::create_object<app::SceneLayers>(get_class());
        }
    } // namespace SceneLayers
} // namespace app::classes::types
