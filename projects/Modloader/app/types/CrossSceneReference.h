#pragma once
#include <Modloader/app/structs/CrossSceneReference.h>
#include <Modloader/app/structs/CrossSceneReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReference {
        inline app::CrossSceneReference__Class** type_info() {
            static app::CrossSceneReference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CrossSceneReference__Class**)(modloader::win::memory::resolve_rva(0x04718310));
            }
            return cache;
        }
        inline app::CrossSceneReference__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReference__Class>(type_info(), "Moon", "CrossSceneReference");
        }
        inline app::CrossSceneReference* create() {
            return il2cpp::create_object<app::CrossSceneReference>(get_class());
        }
    } // namespace CrossSceneReference
} // namespace app::classes::types
