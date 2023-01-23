#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Material__Class.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Material__Array.h>

namespace app::classes::types {
    namespace Material {
        inline app::Material__Class** type_info = (app::Material__Class**)(modloader::win::memory::resolve_rva(0x0472AA50));
        inline app::Material__Class* get_class() {
            return il2cpp::get_class<app::Material__Class>(type_info, "UnityEngine", "Material");
        }
        inline app::Material* create() {
            return il2cpp::create_object<app::Material>(get_class());
        }
        inline app::Material__Array* create_array(int size) {
            return il2cpp::array_new<app::Material__Array>(get_class(), size);
        }
        inline app::Material__Array* create_array(const std::vector<app::Material*>& items) {
            return il2cpp::array_new<app::Material__Array>(get_class(), items);
        }
    } // namespace Material
} // namespace app::classes::types
