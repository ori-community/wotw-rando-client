#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataPoint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataPoint__Class** type_info;
        inline app::DataPoint__Class* get_class() {
            return il2cpp::get_class<app::DataPoint__Class>(type_info, "Moon.Telemetry", "DataPoint");
        }
        inline app::DataPoint* create() {
            return il2cpp::create_object<app::DataPoint>(get_class());
        }
        inline app::DataPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::DataPoint__Array>(get_class(), size);
        }
    } // namespace DataPoint
} // namespace app::classes::types
