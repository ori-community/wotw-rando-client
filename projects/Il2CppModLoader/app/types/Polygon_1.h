#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Polygon_1 {
        inline app::Polygon_1__Class** type_info = (app::Polygon_1__Class**)(modloader::win::memory::resolve_rva(0x04758258));
        inline app::Polygon_1__Class* get_class() {
            return il2cpp::get_class<app::Polygon_1__Class>(type_info, "", "Polygon");
        }
        inline app::Polygon_1* create() {
            return il2cpp::create_object<app::Polygon_1>(get_class());
        }
        inline app::Polygon_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Polygon_1__Array>(get_class(), size);
        }
        inline app::Polygon_1__Array* create_array(const std::vector<app::Polygon_1*>& items) {
            return il2cpp::array_new<app::Polygon_1__Array>(get_class(), items);
        }
    } // namespace Polygon_1
} // namespace app::classes::types
