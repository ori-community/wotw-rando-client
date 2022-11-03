#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameController_c {
        inline app::GameController_c__Class** type_info = (app::GameController_c__Class**)(modloader::win::memory::resolve_rva(0x0475F790));
        inline app::GameController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_c__Class>(type_info, "", "GameController", "<>c");
        }
        inline app::GameController_c* create() {
            return il2cpp::create_object<app::GameController_c>(get_class());
        }
    } // namespace GameController_c
} // namespace app::classes::types
