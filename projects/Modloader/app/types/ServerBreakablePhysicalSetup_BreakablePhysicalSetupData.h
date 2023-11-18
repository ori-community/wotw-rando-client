#pragma once
#include <Modloader/app/structs/ServerBreakablePhysicalSetup_BreakablePhysicalSetupData.h>
#include <Modloader/app/structs/ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Boxed.h>
#include <Modloader/app/structs/ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerBreakablePhysicalSetup_BreakablePhysicalSetupData {
        inline app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class** type_info() {
            static app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class**)(modloader::win::memory::resolve_rva(0x0473D440));
            }
            return cache;
        }
        inline app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class>(type_info(), "", "ServerBreakablePhysicalSetup", "BreakablePhysicalSetupData");
        }
        inline app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData* create() {
            return il2cpp::create_object<app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData>(get_class());
        }
        inline app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Boxed* box(app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData value) {
            return il2cpp::box_value<app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Boxed>(get_class(), value);
        }
    } // namespace ServerBreakablePhysicalSetup_BreakablePhysicalSetupData
} // namespace app::classes::types
