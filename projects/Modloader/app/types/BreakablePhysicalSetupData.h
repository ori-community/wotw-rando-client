#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BreakablePhysicalSetupData__Class.h>
#include <Modloader/app/structs/BreakablePhysicalSetupData.h>
#include <Modloader/app/structs/BreakablePhysicalSetupData__Array.h>

namespace app::classes::types {
    namespace BreakablePhysicalSetupData {
        namespace {
            inline app::BreakablePhysicalSetupData__Class* type_info_ref = nullptr;
        }
        inline app::BreakablePhysicalSetupData__Class** type_info = &type_info_ref;
        inline app::BreakablePhysicalSetupData__Class* get_class() {
            return il2cpp::get_class<app::BreakablePhysicalSetupData__Class>(type_info, "", "BreakablePhysicalSetupData");
        }
        inline app::BreakablePhysicalSetupData* create() {
            return il2cpp::create_object<app::BreakablePhysicalSetupData>(get_class());
        }
        inline app::BreakablePhysicalSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::BreakablePhysicalSetupData__Array>(get_class(), size);
        }
        inline app::BreakablePhysicalSetupData__Array* create_array(const std::vector<app::BreakablePhysicalSetupData*>& items) {
            return il2cpp::array_new<app::BreakablePhysicalSetupData__Array>(get_class(), items);
        }
    } // namespace BreakablePhysicalSetupData
} // namespace app::classes::types
