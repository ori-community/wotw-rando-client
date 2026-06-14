#pragma once
#include <Modloader/app/structs/Skybox.h>
#include <Modloader/app/structs/Skybox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Skybox {
        inline app::Skybox__Class** type_info() {
            static app::Skybox__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Skybox__Class**)(modloader::win::memory::resolve_rva(0x04705508));
            }
            return cache;
        }
        inline app::Skybox__Class* get_class() {
            return il2cpp::get_class<app::Skybox__Class>(type_info(), "UnityEngine", "Skybox");
        }
        inline app::Skybox* create() {
            return il2cpp::create_object<app::Skybox>(get_class());
        }
    } // namespace Skybox
} // namespace app::classes::types
