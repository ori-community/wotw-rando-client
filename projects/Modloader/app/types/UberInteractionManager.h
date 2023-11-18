#pragma once
#include <Modloader/app/structs/UberInteractionManager.h>
#include <Modloader/app/structs/UberInteractionManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager {
        inline app::UberInteractionManager__Class** type_info() {
            static app::UberInteractionManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionManager__Class**)(modloader::win::memory::resolve_rva(0x04775448));
            }
            return cache;
        }
        inline app::UberInteractionManager__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManager__Class>(type_info(), "", "UberInteractionManager");
        }
        inline app::UberInteractionManager* create() {
            return il2cpp::create_object<app::UberInteractionManager>(get_class());
        }
    } // namespace UberInteractionManager
} // namespace app::classes::types
