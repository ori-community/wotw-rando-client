#pragma once
#include <Modloader/app/structs/GameControllerLate_Start_d_4.h>
#include <Modloader/app/structs/GameControllerLate_Start_d_4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameControllerLate_Start_d_4 {
        inline app::GameControllerLate_Start_d_4__Class** type_info() {
            static app::GameControllerLate_Start_d_4__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameControllerLate_Start_d_4__Class**)(modloader::win::memory::resolve_rva(0x04783AC0));
            }
            return cache;
        }
        inline app::GameControllerLate_Start_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::GameControllerLate_Start_d_4__Class>(type_info(), "", "GameControllerLate", "<Start>d__4");
        }
        inline app::GameControllerLate_Start_d_4* create() {
            return il2cpp::create_object<app::GameControllerLate_Start_d_4>(get_class());
        }
    } // namespace GameControllerLate_Start_d_4
} // namespace app::classes::types
