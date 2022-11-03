#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterControl_c_DisplayClass116_0 {
        namespace {
            inline app::UberWaterControl_c_DisplayClass116_0__Class* type_info_ref = nullptr;
        }
        inline app::UberWaterControl_c_DisplayClass116_0__Class** type_info = &type_info_ref;
        inline app::UberWaterControl_c_DisplayClass116_0__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterControl_c_DisplayClass116_0__Class>(type_info, "", "UberWaterControl", "<>c__DisplayClass116_0");
        }
        inline app::UberWaterControl_c_DisplayClass116_0* create() {
            return il2cpp::create_object<app::UberWaterControl_c_DisplayClass116_0>(get_class());
        }
        inline app::UberWaterControl_c_DisplayClass116_0__Boxed* box(app::UberWaterControl_c_DisplayClass116_0 value) {
            return il2cpp::box_value<app::UberWaterControl_c_DisplayClass116_0__Boxed>(get_class(), value);
        }
    } // namespace UberWaterControl_c_DisplayClass116_0
} // namespace app::classes::types
