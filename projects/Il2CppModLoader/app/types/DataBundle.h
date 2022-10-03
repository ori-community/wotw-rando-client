#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataBundle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataBundle__Class** type_info;
        inline app::DataBundle__Class* get_class() {
            return il2cpp::get_class<app::DataBundle__Class>(type_info, "Moon.Telemetry.Performance", "DataBundle");
        }
        inline app::DataBundle* create() {
            return il2cpp::create_object<app::DataBundle>(get_class());
        }
    } // namespace DataBundle
} // namespace app::classes::types
