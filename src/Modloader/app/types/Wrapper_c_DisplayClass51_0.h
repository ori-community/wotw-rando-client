#pragma once
#include <Modloader/app/structs/Wrapper_c_DisplayClass51_0.h>
#include <Modloader/app/structs/Wrapper_c_DisplayClass51_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Wrapper_c_DisplayClass51_0 {
        inline app::Wrapper_c_DisplayClass51_0__Class** type_info() {
            static app::Wrapper_c_DisplayClass51_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Wrapper_c_DisplayClass51_0__Class**)(modloader::win::memory::resolve_rva(0x0474A2B8));
            }
            return cache;
        }
        inline app::Wrapper_c_DisplayClass51_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Wrapper_c_DisplayClass51_0__Class>(type_info(), "Grdk", "Wrapper", "<>c__DisplayClass51_0");
        }
        inline app::Wrapper_c_DisplayClass51_0* create() {
            return il2cpp::create_object<app::Wrapper_c_DisplayClass51_0>(get_class());
        }
    } // namespace Wrapper_c_DisplayClass51_0
} // namespace app::classes::types
