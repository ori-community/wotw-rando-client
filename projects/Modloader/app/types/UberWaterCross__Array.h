#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterCross__Array {
        namespace {
            inline app::UberWaterCross__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberWaterCross__Array__Class** type_info = &type_info_ref;
        inline app::UberWaterCross__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterCross__Array__Class>(type_info, "", "UberWaterCross[]");
        }
        inline app::UberWaterCross__Array* create() {
            return il2cpp::create_object<app::UberWaterCross__Array>(get_class());
        }
    } // namespace UberWaterCross__Array
} // namespace app::classes::types
