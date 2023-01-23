#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class.h>
#include <Modloader/app/structs/ServerBreakablePhysicalSetup_BreakablePhysicalSetupData.h>
#include <Modloader/app/structs/ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Boxed.h>

namespace app::classes::types {
    namespace ServerBreakablePhysicalSetup_BreakablePhysicalSetupData {
        inline app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class** type_info = (app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class**)(modloader::win::memory::resolve_rva(0x0473D440));
        inline app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class>(type_info, "", "ServerBreakablePhysicalSetup", "BreakablePhysicalSetupData");
        }
        inline app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData* create() {
            return il2cpp::create_object<app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData>(get_class());
        }
        inline app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Boxed* box(app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData value) {
            return il2cpp::box_value<app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Boxed>(get_class(), value);
        }
    } // namespace ServerBreakablePhysicalSetup_BreakablePhysicalSetupData
} // namespace app::classes::types
