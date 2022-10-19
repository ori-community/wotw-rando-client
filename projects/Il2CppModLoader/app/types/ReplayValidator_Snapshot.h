#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReplayValidator_Snapshot {
        inline app::ReplayValidator_Snapshot__Class** type_info = (app::ReplayValidator_Snapshot__Class**)(modloader::win::memory::resolve_rva(0x0472B1B0));
        inline app::ReplayValidator_Snapshot__Class* get_class() {
            return il2cpp::get_nested_class<app::ReplayValidator_Snapshot__Class>(type_info, "Moon.Race", "ReplayValidator", "Snapshot");
        }
        inline app::ReplayValidator_Snapshot* create() {
            return il2cpp::create_object<app::ReplayValidator_Snapshot>(get_class());
        }
        inline app::ReplayValidator_Snapshot__Array* create_array(int size) {
            return il2cpp::array_new<app::ReplayValidator_Snapshot__Array>(get_class(), size);
        }
        inline app::ReplayValidator_Snapshot__Array* create_array(const std::vector<app::ReplayValidator_Snapshot*>& items) {
            return il2cpp::array_new<app::ReplayValidator_Snapshot__Array>(get_class(), items);
        }
    } // namespace ReplayValidator_Snapshot
} // namespace app::classes::types
