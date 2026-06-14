#pragma once
#include <Modloader/app/structs/ReplayValidator_Snapshot.h>
#include <Modloader/app/structs/ReplayValidator_Snapshot__Array.h>
#include <Modloader/app/structs/ReplayValidator_Snapshot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplayValidator_Snapshot {
        inline app::ReplayValidator_Snapshot__Class** type_info() {
            static app::ReplayValidator_Snapshot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReplayValidator_Snapshot__Class**)(modloader::win::memory::resolve_rva(0x0472B1B0));
            }
            return cache;
        }
        inline app::ReplayValidator_Snapshot__Class* get_class() {
            return il2cpp::get_nested_class<app::ReplayValidator_Snapshot__Class>(type_info(), "Moon.Race", "ReplayValidator", "Snapshot");
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
