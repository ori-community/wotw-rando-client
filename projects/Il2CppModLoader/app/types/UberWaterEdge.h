#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterEdge {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberWaterEdge__Class** type_info;
        inline app::UberWaterEdge__Class* get_class() {
            return il2cpp::get_class<app::UberWaterEdge__Class>(type_info, "", "UberWaterEdge");
        }
        inline app::UberWaterEdge* create() {
            return il2cpp::create_object<app::UberWaterEdge>(get_class());
        }
        inline app::UberWaterEdge__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterEdge__Array>(get_class(), size);
        }
        inline app::UberWaterEdge__Array* create_array(const std::vector<app::UberWaterEdge*>& items) {
            return il2cpp::array_new<app::UberWaterEdge__Array>(get_class(), items);
        }
    } // namespace UberWaterEdge
} // namespace app::classes::types
