#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BreakablePhysicalSetup {
        inline app::BreakablePhysicalSetup__Class** type_info = (app::BreakablePhysicalSetup__Class**)(modloader::win::memory::resolve_rva(0x04786820));
        inline app::BreakablePhysicalSetup__Class* get_class() {
            return il2cpp::get_class<app::BreakablePhysicalSetup__Class>(type_info, "", "BreakablePhysicalSetup");
        }
        inline app::BreakablePhysicalSetup* create() {
            return il2cpp::create_object<app::BreakablePhysicalSetup>(get_class());
        }
    } // namespace BreakablePhysicalSetup
} // namespace app::classes::types
