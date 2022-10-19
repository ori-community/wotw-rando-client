#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterReflectionPlane {
        inline app::UberWaterReflectionPlane__Class** type_info = (app::UberWaterReflectionPlane__Class**)(modloader::win::memory::resolve_rva(0x04743678));
        inline app::UberWaterReflectionPlane__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflectionPlane__Class>(type_info, "", "UberWaterReflectionPlane");
        }
        inline app::UberWaterReflectionPlane* create() {
            return il2cpp::create_object<app::UberWaterReflectionPlane>(get_class());
        }
        inline app::UberWaterReflectionPlane__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterReflectionPlane__Array>(get_class(), size);
        }
        inline app::UberWaterReflectionPlane__Array* create_array(const std::vector<app::UberWaterReflectionPlane*>& items) {
            return il2cpp::array_new<app::UberWaterReflectionPlane__Array>(get_class(), items);
        }
    } // namespace UberWaterReflectionPlane
} // namespace app::classes::types
