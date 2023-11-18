#pragma once
#include <Modloader/app/structs/BreakablePhysicalSetup.h>
#include <Modloader/app/structs/BreakablePhysicalSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BreakablePhysicalSetup {
        inline app::BreakablePhysicalSetup__Class** type_info() {
            static app::BreakablePhysicalSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BreakablePhysicalSetup__Class**)(modloader::win::memory::resolve_rva(0x04786820));
            }
            return cache;
        }
        inline app::BreakablePhysicalSetup__Class* get_class() {
            return il2cpp::get_class<app::BreakablePhysicalSetup__Class>(type_info(), "", "BreakablePhysicalSetup");
        }
        inline app::BreakablePhysicalSetup* create() {
            return il2cpp::create_object<app::BreakablePhysicalSetup>(get_class());
        }
    } // namespace BreakablePhysicalSetup
} // namespace app::classes::types
