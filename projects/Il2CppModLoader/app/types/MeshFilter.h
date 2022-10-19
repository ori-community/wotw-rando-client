#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeshFilter {
        inline app::MeshFilter__Class** type_info = (app::MeshFilter__Class**)(modloader::win::memory::resolve_rva(0x0477A9F0));
        inline app::MeshFilter__Class* get_class() {
            return il2cpp::get_class<app::MeshFilter__Class>(type_info, "UnityEngine", "MeshFilter");
        }
        inline app::MeshFilter* create() {
            return il2cpp::create_object<app::MeshFilter>(get_class());
        }
        inline app::MeshFilter__Array* create_array(int size) {
            return il2cpp::array_new<app::MeshFilter__Array>(get_class(), size);
        }
        inline app::MeshFilter__Array* create_array(const std::vector<app::MeshFilter*>& items) {
            return il2cpp::array_new<app::MeshFilter__Array>(get_class(), items);
        }
    } // namespace MeshFilter
} // namespace app::classes::types
