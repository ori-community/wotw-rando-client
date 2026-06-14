#pragma once
#include <Modloader/app/structs/PhysicMaterial.h>
#include <Modloader/app/structs/PhysicMaterial__Array.h>
#include <Modloader/app/structs/PhysicMaterial__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicMaterial {
        inline app::PhysicMaterial__Class** type_info() {
            static app::PhysicMaterial__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicMaterial__Class**)(modloader::win::memory::resolve_rva(0x04734FB0));
            }
            return cache;
        }
        inline app::PhysicMaterial__Class* get_class() {
            return il2cpp::get_class<app::PhysicMaterial__Class>(type_info(), "UnityEngine", "PhysicMaterial");
        }
        inline app::PhysicMaterial* create() {
            return il2cpp::create_object<app::PhysicMaterial>(get_class());
        }
        inline app::PhysicMaterial__Array* create_array(int size) {
            return il2cpp::array_new<app::PhysicMaterial__Array>(get_class(), size);
        }
        inline app::PhysicMaterial__Array* create_array(const std::vector<app::PhysicMaterial*>& items) {
            return il2cpp::array_new<app::PhysicMaterial__Array>(get_class(), items);
        }
    } // namespace PhysicMaterial
} // namespace app::classes::types
