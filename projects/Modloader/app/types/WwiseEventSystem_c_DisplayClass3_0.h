#pragma once
#include <Modloader/app/structs/WwiseEventSystem_c_DisplayClass3_0.h>
#include <Modloader/app/structs/WwiseEventSystem_c_DisplayClass3_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseEventSystem_c_DisplayClass3_0 {
        inline app::WwiseEventSystem_c_DisplayClass3_0__Class** type_info() {
            static app::WwiseEventSystem_c_DisplayClass3_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseEventSystem_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x0472D750));
            }
            return cache;
        }
        inline app::WwiseEventSystem_c_DisplayClass3_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseEventSystem_c_DisplayClass3_0__Class>(type_info(), "Moon.Wwise", "WwiseEventSystem", "<>c__DisplayClass3_0");
        }
        inline app::WwiseEventSystem_c_DisplayClass3_0* create() {
            return il2cpp::create_object<app::WwiseEventSystem_c_DisplayClass3_0>(get_class());
        }
    } // namespace WwiseEventSystem_c_DisplayClass3_0
} // namespace app::classes::types
