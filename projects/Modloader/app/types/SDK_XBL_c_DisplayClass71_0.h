#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SDK_XBL_c_DisplayClass71_0 {
        inline app::SDK_XBL_c_DisplayClass71_0__Class** type_info = (app::SDK_XBL_c_DisplayClass71_0__Class**)(modloader::win::memory::resolve_rva(0x0475BBA8));
        inline app::SDK_XBL_c_DisplayClass71_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SDK_XBL_c_DisplayClass71_0__Class>(type_info, "XGamingRuntime", "SDK+XBL", "<>c__DisplayClass71_0");
        }
        inline app::SDK_XBL_c_DisplayClass71_0* create() {
            return il2cpp::create_object<app::SDK_XBL_c_DisplayClass71_0>(get_class());
        }
    } // namespace SDK_XBL_c_DisplayClass71_0
} // namespace app::classes::types
