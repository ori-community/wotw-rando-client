#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StressTester_StartTestFromScene_d_134 {
        inline app::StressTester_StartTestFromScene_d_134__Class** type_info = (app::StressTester_StartTestFromScene_d_134__Class**)(modloader::win::memory::resolve_rva(0x04702D78));
        inline app::StressTester_StartTestFromScene_d_134__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_StartTestFromScene_d_134__Class>(type_info, "", "StressTester", "<StartTestFromScene>d__134");
        }
        inline app::StressTester_StartTestFromScene_d_134* create() {
            return il2cpp::create_object<app::StressTester_StartTestFromScene_d_134>(get_class());
        }
    } // namespace StressTester_StartTestFromScene_d_134
} // namespace app::classes::types
