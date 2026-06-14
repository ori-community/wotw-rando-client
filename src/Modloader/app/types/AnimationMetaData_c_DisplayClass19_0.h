#pragma once
#include <Modloader/app/structs/AnimationMetaData_c_DisplayClass19_0.h>
#include <Modloader/app/structs/AnimationMetaData_c_DisplayClass19_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaData_c_DisplayClass19_0 {
        inline app::AnimationMetaData_c_DisplayClass19_0__Class** type_info() {
            static app::AnimationMetaData_c_DisplayClass19_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationMetaData_c_DisplayClass19_0__Class**)(modloader::win::memory::resolve_rva(0x04798788));
            }
            return cache;
        }
        inline app::AnimationMetaData_c_DisplayClass19_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationMetaData_c_DisplayClass19_0__Class>(type_info(), "", "AnimationMetaData", "<>c__DisplayClass19_0");
        }
        inline app::AnimationMetaData_c_DisplayClass19_0* create() {
            return il2cpp::create_object<app::AnimationMetaData_c_DisplayClass19_0>(get_class());
        }
    } // namespace AnimationMetaData_c_DisplayClass19_0
} // namespace app::classes::types
