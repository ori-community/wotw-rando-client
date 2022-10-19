#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BadTriangle {
        inline app::BadTriangle__Class** type_info = (app::BadTriangle__Class**)(modloader::win::memory::resolve_rva(0x04742B68));
        inline app::BadTriangle__Class* get_class() {
            return il2cpp::get_class<app::BadTriangle__Class>(type_info, "TriangleNet.Meshing.Data", "BadTriangle");
        }
        inline app::BadTriangle* create() {
            return il2cpp::create_object<app::BadTriangle>(get_class());
        }
        inline app::BadTriangle__Array* create_array(int size) {
            return il2cpp::array_new<app::BadTriangle__Array>(get_class(), size);
        }
        inline app::BadTriangle__Array* create_array(const std::vector<app::BadTriangle*>& items) {
            return il2cpp::array_new<app::BadTriangle__Array>(get_class(), items);
        }
    } // namespace BadTriangle
} // namespace app::classes::types
