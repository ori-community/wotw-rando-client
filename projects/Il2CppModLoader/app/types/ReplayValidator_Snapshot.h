#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReplayValidator_Snapshot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReplayValidator_Snapshot__Class** type_info;
        inline app::ReplayValidator_Snapshot__Class* get_class() {
            return il2cpp::get_nested_class<app::ReplayValidator_Snapshot__Class>(type_info, "Moon.Race", "ReplayValidator", "Snapshot");
        }
        inline app::ReplayValidator_Snapshot* create() {
            return il2cpp::create_object<app::ReplayValidator_Snapshot>(get_class());
        }
        inline app::ReplayValidator_Snapshot__Array* create_array(int size) {
            return il2cpp::array_new<app::ReplayValidator_Snapshot__Array>(get_class(), size);
        }
    } // namespace ReplayValidator_Snapshot
} // namespace app::classes::types
