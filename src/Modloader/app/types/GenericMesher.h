#pragma once
#include <Modloader/app/structs/GenericMesher.h>
#include <Modloader/app/structs/GenericMesher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericMesher {
        inline app::GenericMesher__Class** type_info() {
            static app::GenericMesher__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GenericMesher__Class**)(modloader::win::memory::resolve_rva(0x04721790));
            }
            return cache;
        }
        inline app::GenericMesher__Class* get_class() {
            return il2cpp::get_class<app::GenericMesher__Class>(type_info(), "TriangleNet.Meshing", "GenericMesher");
        }
        inline app::GenericMesher* create() {
            return il2cpp::create_object<app::GenericMesher>(get_class());
        }
    } // namespace GenericMesher
} // namespace app::classes::types
