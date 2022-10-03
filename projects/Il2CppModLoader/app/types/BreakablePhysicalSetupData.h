#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BreakablePhysicalSetupData {
        namespace {
            app::BreakablePhysicalSetupData__Class* type_info_ref = nullptr;
        }
        app::BreakablePhysicalSetupData__Class** type_info = &type_info_ref;
        inline app::BreakablePhysicalSetupData__Class* get_class() {
            return il2cpp::get_class<app::BreakablePhysicalSetupData__Class>(type_info, "", "BreakablePhysicalSetupData");
        }
        inline app::BreakablePhysicalSetupData* create() {
            return il2cpp::create_object<app::BreakablePhysicalSetupData>(get_class());
        }
        inline app::BreakablePhysicalSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::BreakablePhysicalSetupData__Array>(get_class(), size);
        }
    } // namespace BreakablePhysicalSetupData
} // namespace app::classes::types
