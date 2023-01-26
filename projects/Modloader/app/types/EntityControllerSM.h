#pragma once
#include <Modloader/app/structs/EntityControllerSM.h>
#include <Modloader/app/structs/EntityControllerSM__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityControllerSM {
        inline app::EntityControllerSM__Class** type_info() {
            static app::EntityControllerSM__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityControllerSM__Class**)(modloader::win::memory::resolve_rva(0x0470ED20));
            }
            return cache;
        }
        inline app::EntityControllerSM__Class* get_class() {
            return il2cpp::get_class<app::EntityControllerSM__Class>(type_info(), "", "EntityControllerSM");
        }
        inline app::EntityControllerSM* create() {
            return il2cpp::create_object<app::EntityControllerSM>(get_class());
        }
    } // namespace EntityControllerSM
} // namespace app::classes::types
