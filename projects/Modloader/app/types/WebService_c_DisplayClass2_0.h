#pragma once
#include <Modloader/app/structs/WebService_c_DisplayClass2_0.h>
#include <Modloader/app/structs/WebService_c_DisplayClass2_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebService_c_DisplayClass2_0 {
        inline app::WebService_c_DisplayClass2_0__Class** type_info() {
            static app::WebService_c_DisplayClass2_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebService_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04795CA0));
            }
            return cache;
        }
        inline app::WebService_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WebService_c_DisplayClass2_0__Class>(type_info(), "Moon.Race.Networking", "WebService", "<>c__DisplayClass2_0");
        }
        inline app::WebService_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::WebService_c_DisplayClass2_0>(get_class());
        }
    } // namespace WebService_c_DisplayClass2_0
} // namespace app::classes::types
