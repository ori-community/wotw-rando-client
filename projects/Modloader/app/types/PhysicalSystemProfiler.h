#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicalSystemProfiler__Class.h>
#include <Modloader/app/structs/PhysicalSystemProfiler.h>

namespace app::classes::types {
    namespace PhysicalSystemProfiler {
        inline app::PhysicalSystemProfiler__Class** type_info = (app::PhysicalSystemProfiler__Class**)(modloader::win::memory::resolve_rva(0x04785260));
        inline app::PhysicalSystemProfiler__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemProfiler__Class>(type_info, "", "PhysicalSystemProfiler");
        }
        inline app::PhysicalSystemProfiler* create() {
            return il2cpp::create_object<app::PhysicalSystemProfiler>(get_class());
        }
    } // namespace PhysicalSystemProfiler
} // namespace app::classes::types
