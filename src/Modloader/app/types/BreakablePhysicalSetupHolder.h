#pragma once
#include <Modloader/app/structs/BreakablePhysicalSetupHolder.h>
#include <Modloader/app/structs/BreakablePhysicalSetupHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BreakablePhysicalSetupHolder {
        inline app::BreakablePhysicalSetupHolder__Class** type_info() {
            static app::BreakablePhysicalSetupHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BreakablePhysicalSetupHolder__Class**)(modloader::win::memory::resolve_rva(0x0476CCF8));
            }
            return cache;
        }
        inline app::BreakablePhysicalSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::BreakablePhysicalSetupHolder__Class>(type_info(), "", "BreakablePhysicalSetupHolder");
        }
        inline app::BreakablePhysicalSetupHolder* create() {
            return il2cpp::create_object<app::BreakablePhysicalSetupHolder>(get_class());
        }
    } // namespace BreakablePhysicalSetupHolder
} // namespace app::classes::types
