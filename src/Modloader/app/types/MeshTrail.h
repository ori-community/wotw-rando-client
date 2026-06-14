#pragma once
#include <Modloader/app/structs/MeshTrail.h>
#include <Modloader/app/structs/MeshTrail__Array.h>
#include <Modloader/app/structs/MeshTrail__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshTrail {
        inline app::MeshTrail__Class** type_info() {
            static app::MeshTrail__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeshTrail__Class**)(modloader::win::memory::resolve_rva(0x047010D0));
            }
            return cache;
        }
        inline app::MeshTrail__Class* get_class() {
            return il2cpp::get_class<app::MeshTrail__Class>(type_info(), "", "MeshTrail");
        }
        inline app::MeshTrail* create() {
            return il2cpp::create_object<app::MeshTrail>(get_class());
        }
        inline app::MeshTrail__Array* create_array(int size) {
            return il2cpp::array_new<app::MeshTrail__Array>(get_class(), size);
        }
        inline app::MeshTrail__Array* create_array(const std::vector<app::MeshTrail*>& items) {
            return il2cpp::array_new<app::MeshTrail__Array>(get_class(), items);
        }
    } // namespace MeshTrail
} // namespace app::classes::types
