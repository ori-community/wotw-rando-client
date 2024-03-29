#pragma once
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Mesh__Array.h>
#include <Modloader/app/structs/Mesh__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Mesh {
        inline app::Mesh__Class** type_info() {
            static app::Mesh__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Mesh__Class**)(modloader::win::memory::resolve_rva(0x0477A190));
            }
            return cache;
        }
        inline app::Mesh__Class* get_class() {
            return il2cpp::get_class<app::Mesh__Class>(type_info(), "UnityEngine", "Mesh");
        }
        inline app::Mesh* create() {
            return il2cpp::create_object<app::Mesh>(get_class());
        }
        inline app::Mesh__Array* create_array(int size) {
            return il2cpp::array_new<app::Mesh__Array>(get_class(), size);
        }
        inline app::Mesh__Array* create_array(const std::vector<app::Mesh*>& items) {
            return il2cpp::array_new<app::Mesh__Array>(get_class(), items);
        }
    } // namespace Mesh
} // namespace app::classes::types
