#pragma once
#include <Modloader/app/structs/StressTester_c_DisplayClass134_0.h>
#include <Modloader/app/structs/StressTester_c_DisplayClass134_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StressTester_c_DisplayClass134_0 {
        inline app::StressTester_c_DisplayClass134_0__Class** type_info() {
            static app::StressTester_c_DisplayClass134_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StressTester_c_DisplayClass134_0__Class**)(modloader::win::memory::resolve_rva(0x0471B7D0));
            }
            return cache;
        }
        inline app::StressTester_c_DisplayClass134_0__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_c_DisplayClass134_0__Class>(type_info(), "", "StressTester", "<>c__DisplayClass134_0");
        }
        inline app::StressTester_c_DisplayClass134_0* create() {
            return il2cpp::create_object<app::StressTester_c_DisplayClass134_0>(get_class());
        }
    } // namespace StressTester_c_DisplayClass134_0
} // namespace app::classes::types
