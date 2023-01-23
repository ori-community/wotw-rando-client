#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo__Class.h>
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo.h>
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo__Array.h>

namespace app::classes::types {
    namespace PhysicalSystemProfiler_UpdateInfo {
        inline app::PhysicalSystemProfiler_UpdateInfo__Class** type_info = (app::PhysicalSystemProfiler_UpdateInfo__Class**)(modloader::win::memory::resolve_rva(0x0471D338));
        inline app::PhysicalSystemProfiler_UpdateInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicalSystemProfiler_UpdateInfo__Class>(type_info, "", "PhysicalSystemProfiler", "UpdateInfo");
        }
        inline app::PhysicalSystemProfiler_UpdateInfo* create() {
            return il2cpp::create_object<app::PhysicalSystemProfiler_UpdateInfo>(get_class());
        }
        inline app::PhysicalSystemProfiler_UpdateInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::PhysicalSystemProfiler_UpdateInfo__Array>(get_class(), size);
        }
        inline app::PhysicalSystemProfiler_UpdateInfo__Array* create_array(const std::vector<app::PhysicalSystemProfiler_UpdateInfo*>& items) {
            return il2cpp::array_new<app::PhysicalSystemProfiler_UpdateInfo__Array>(get_class(), items);
        }
    } // namespace PhysicalSystemProfiler_UpdateInfo
} // namespace app::classes::types
