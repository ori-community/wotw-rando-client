#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BreakablePhysicalSetupHolder {
        inline app::BreakablePhysicalSetupHolder__Class** type_info = (app::BreakablePhysicalSetupHolder__Class**)(modloader::win::memory::resolve_rva(0x0476CCF8));
        inline app::BreakablePhysicalSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::BreakablePhysicalSetupHolder__Class>(type_info, "", "BreakablePhysicalSetupHolder");
        }
        inline app::BreakablePhysicalSetupHolder* create() {
            return il2cpp::create_object<app::BreakablePhysicalSetupHolder>(get_class());
        }
    } // namespace BreakablePhysicalSetupHolder
} // namespace app::classes::types
