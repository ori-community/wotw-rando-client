#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberInteractionManager {
        inline app::UberInteractionManager__Class** type_info = (app::UberInteractionManager__Class**)(modloader::win::memory::resolve_rva(0x04775448));
        inline app::UberInteractionManager__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManager__Class>(type_info, "", "UberInteractionManager");
        }
        inline app::UberInteractionManager* create() {
            return il2cpp::create_object<app::UberInteractionManager>(get_class());
        }
    } // namespace UberInteractionManager
} // namespace app::classes::types
