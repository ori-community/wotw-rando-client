#pragma once
#include <Modloader/app/structs/SDK_XBL_c_DisplayClass130_0.h>
#include <Modloader/app/structs/SDK_XBL_c_DisplayClass130_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SDK_XBL_c_DisplayClass130_0 {
        inline app::SDK_XBL_c_DisplayClass130_0__Class** type_info() {
            static app::SDK_XBL_c_DisplayClass130_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SDK_XBL_c_DisplayClass130_0__Class**)(modloader::win::memory::resolve_rva(0x0478F0A8));
            }
            return cache;
        }
        inline app::SDK_XBL_c_DisplayClass130_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SDK_XBL_c_DisplayClass130_0__Class>(type_info(), "XGamingRuntime", "SDK+XBL", "<>c__DisplayClass130_0");
        }
        inline app::SDK_XBL_c_DisplayClass130_0* create() {
            return il2cpp::create_object<app::SDK_XBL_c_DisplayClass130_0>(get_class());
        }
    } // namespace SDK_XBL_c_DisplayClass130_0
} // namespace app::classes::types
