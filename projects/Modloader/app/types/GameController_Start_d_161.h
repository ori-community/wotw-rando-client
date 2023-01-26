#pragma once
#include <Modloader/app/structs/GameController_Start_d_161.h>
#include <Modloader/app/structs/GameController_Start_d_161__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameController_Start_d_161 {
        inline app::GameController_Start_d_161__Class** type_info() {
            static app::GameController_Start_d_161__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameController_Start_d_161__Class**)(modloader::win::memory::resolve_rva(0x04740028));
            }
            return cache;
        }
        inline app::GameController_Start_d_161__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_Start_d_161__Class>(type_info(), "", "GameController", "<Start>d__161");
        }
        inline app::GameController_Start_d_161* create() {
            return il2cpp::create_object<app::GameController_Start_d_161>(get_class());
        }
    } // namespace GameController_Start_d_161
} // namespace app::classes::types
