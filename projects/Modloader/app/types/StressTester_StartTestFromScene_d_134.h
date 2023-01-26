#pragma once
#include <Modloader/app/structs/StressTester_StartTestFromScene_d_134.h>
#include <Modloader/app/structs/StressTester_StartTestFromScene_d_134__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StressTester_StartTestFromScene_d_134 {
        inline app::StressTester_StartTestFromScene_d_134__Class** type_info() {
            static app::StressTester_StartTestFromScene_d_134__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StressTester_StartTestFromScene_d_134__Class**)(modloader::win::memory::resolve_rva(0x04702D78));
            }
            return cache;
        }
        inline app::StressTester_StartTestFromScene_d_134__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_StartTestFromScene_d_134__Class>(type_info(), "", "StressTester", "<StartTestFromScene>d__134");
        }
        inline app::StressTester_StartTestFromScene_d_134* create() {
            return il2cpp::create_object<app::StressTester_StartTestFromScene_d_134>(get_class());
        }
    } // namespace StressTester_StartTestFromScene_d_134
} // namespace app::classes::types
