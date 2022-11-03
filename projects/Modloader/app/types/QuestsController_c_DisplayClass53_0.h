#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestsController_c_DisplayClass53_0 {
        inline app::QuestsController_c_DisplayClass53_0__Class** type_info = (app::QuestsController_c_DisplayClass53_0__Class**)(modloader::win::memory::resolve_rva(0x0472A098));
        inline app::QuestsController_c_DisplayClass53_0__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestsController_c_DisplayClass53_0__Class>(type_info, "", "QuestsController", "<>c__DisplayClass53_0");
        }
        inline app::QuestsController_c_DisplayClass53_0* create() {
            return il2cpp::create_object<app::QuestsController_c_DisplayClass53_0>(get_class());
        }
    } // namespace QuestsController_c_DisplayClass53_0
} // namespace app::classes::types
