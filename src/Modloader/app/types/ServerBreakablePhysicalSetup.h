#pragma once
#include <Modloader/app/structs/ServerBreakablePhysicalSetup.h>
#include <Modloader/app/structs/ServerBreakablePhysicalSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerBreakablePhysicalSetup {
        inline app::ServerBreakablePhysicalSetup__Class** type_info() {
            static app::ServerBreakablePhysicalSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerBreakablePhysicalSetup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerBreakablePhysicalSetup__Class* get_class() {
            return il2cpp::get_class<app::ServerBreakablePhysicalSetup__Class>(type_info(), "", "ServerBreakablePhysicalSetup");
        }
        inline app::ServerBreakablePhysicalSetup* create() {
            return il2cpp::create_object<app::ServerBreakablePhysicalSetup>(get_class());
        }
    } // namespace ServerBreakablePhysicalSetup
} // namespace app::classes::types
