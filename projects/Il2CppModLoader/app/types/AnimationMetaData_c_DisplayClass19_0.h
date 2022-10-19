#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationMetaData_c_DisplayClass19_0 {
        inline app::AnimationMetaData_c_DisplayClass19_0__Class** type_info = (app::AnimationMetaData_c_DisplayClass19_0__Class**)(modloader::win::memory::resolve_rva(0x04798788));
        inline app::AnimationMetaData_c_DisplayClass19_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationMetaData_c_DisplayClass19_0__Class>(type_info, "", "AnimationMetaData", "<>c__DisplayClass19_0");
        }
        inline app::AnimationMetaData_c_DisplayClass19_0* create() {
            return il2cpp::create_object<app::AnimationMetaData_c_DisplayClass19_0>(get_class());
        }
    } // namespace AnimationMetaData_c_DisplayClass19_0
} // namespace app::classes::types
