#pragma once
#include <Modloader/app/structs/ScenePreloading.h>
#include <Modloader/app/structs/ScenePreloading__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenePreloading {
        inline app::ScenePreloading__Class** type_info() {
            static app::ScenePreloading__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenePreloading__Class**)(modloader::win::memory::resolve_rva(0x0471CEE0));
            }
            return cache;
        }
        inline app::ScenePreloading__Class* get_class() {
            return il2cpp::get_class<app::ScenePreloading__Class>(type_info(), "Moon.Timeline", "ScenePreloading");
        }
        inline app::ScenePreloading* create() {
            return il2cpp::create_object<app::ScenePreloading>(get_class());
        }
    } // namespace ScenePreloading
} // namespace app::classes::types
