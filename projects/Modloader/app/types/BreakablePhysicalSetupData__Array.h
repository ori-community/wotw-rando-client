#pragma once
#include <Modloader/app/structs/BreakablePhysicalSetupData__Array.h>
#include <Modloader/app/structs/BreakablePhysicalSetupData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BreakablePhysicalSetupData__Array {
        inline app::BreakablePhysicalSetupData__Array__Class** type_info() {
            static app::BreakablePhysicalSetupData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BreakablePhysicalSetupData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BreakablePhysicalSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::BreakablePhysicalSetupData__Array__Class>(type_info(), "", "BreakablePhysicalSetupData[]");
        }
        inline app::BreakablePhysicalSetupData__Array* create() {
            return il2cpp::create_object<app::BreakablePhysicalSetupData__Array>(get_class());
        }
    } // namespace BreakablePhysicalSetupData__Array
} // namespace app::classes::types
