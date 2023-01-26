#pragma once
#include <Modloader/app/structs/DialogHandler_c_DisplayClass3_0.h>
#include <Modloader/app/structs/DialogHandler_c_DisplayClass3_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DialogHandler_c_DisplayClass3_0 {
        inline app::DialogHandler_c_DisplayClass3_0__Class** type_info() {
            static app::DialogHandler_c_DisplayClass3_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DialogHandler_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x04736FA0));
            }
            return cache;
        }
        inline app::DialogHandler_c_DisplayClass3_0__Class* get_class() {
            return il2cpp::get_nested_class<app::DialogHandler_c_DisplayClass3_0__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "DialogHandler", "<>c__DisplayClass3_0");
        }
        inline app::DialogHandler_c_DisplayClass3_0* create() {
            return il2cpp::create_object<app::DialogHandler_c_DisplayClass3_0>(get_class());
        }
    } // namespace DialogHandler_c_DisplayClass3_0
} // namespace app::classes::types
