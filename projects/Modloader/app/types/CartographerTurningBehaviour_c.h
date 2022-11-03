#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartographerTurningBehaviour_c {
        inline app::CartographerTurningBehaviour_c__Class** type_info = (app::CartographerTurningBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0474ACA8));
        inline app::CartographerTurningBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CartographerTurningBehaviour_c__Class>(type_info, "", "CartographerTurningBehaviour", "<>c");
        }
        inline app::CartographerTurningBehaviour_c* create() {
            return il2cpp::create_object<app::CartographerTurningBehaviour_c>(get_class());
        }
    } // namespace CartographerTurningBehaviour_c
} // namespace app::classes::types
