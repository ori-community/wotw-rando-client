#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Mesh__Class.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Mesh__Array.h>

namespace app::classes::types {
    namespace Mesh {
        inline app::Mesh__Class** type_info = (app::Mesh__Class**)(modloader::win::memory::resolve_rva(0x0477A190));
        inline app::Mesh__Class* get_class() {
            return il2cpp::get_class<app::Mesh__Class>(type_info, "UnityEngine", "Mesh");
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
