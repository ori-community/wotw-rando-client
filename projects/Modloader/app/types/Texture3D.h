#pragma once
#include <Modloader/app/structs/Texture3D.h>
#include <Modloader/app/structs/Texture3D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Texture3D {
        inline app::Texture3D__Class** type_info() {
            static app::Texture3D__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Texture3D__Class**)(modloader::win::memory::resolve_rva(0x04728B98));
            }
            return cache;
        }
        inline app::Texture3D__Class* get_class() {
            return il2cpp::get_class<app::Texture3D__Class>(type_info(), "UnityEngine", "Texture3D");
        }
        inline app::Texture3D* create() {
            return il2cpp::create_object<app::Texture3D>(get_class());
        }
    } // namespace Texture3D
} // namespace app::classes::types
