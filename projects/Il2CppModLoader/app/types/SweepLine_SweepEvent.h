#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SweepLine_SweepEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SweepLine_SweepEvent__Class** type_info;
        inline app::SweepLine_SweepEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::SweepLine_SweepEvent__Class>(type_info, "TriangleNet.Meshing.Algorithm", "SweepLine", "SweepEvent");
        }
        inline app::SweepLine_SweepEvent* create() {
            return il2cpp::create_object<app::SweepLine_SweepEvent>(get_class());
        }
        inline app::SweepLine_SweepEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::SweepLine_SweepEvent__Array>(get_class(), size);
        }
    } // namespace SweepLine_SweepEvent
} // namespace app::classes::types
