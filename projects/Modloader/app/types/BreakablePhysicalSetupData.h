#pragma once
#include <Modloader/app/structs/BreakablePhysicalSetupData.h>
#include <Modloader/app/structs/BreakablePhysicalSetupData__Array.h>
#include <Modloader/app/structs/BreakablePhysicalSetupData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BreakablePhysicalSetupData {
        inline app::BreakablePhysicalSetupData__Class** type_info() {
            static app::BreakablePhysicalSetupData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BreakablePhysicalSetupData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BreakablePhysicalSetupData__Class* get_class() {
            return il2cpp::get_class<app::BreakablePhysicalSetupData__Class>(type_info(), "", "BreakablePhysicalSetupData");
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
