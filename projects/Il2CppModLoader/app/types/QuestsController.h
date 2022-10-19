#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestsController {
        inline app::QuestsController__Class** type_info = (app::QuestsController__Class**)(modloader::win::memory::resolve_rva(0x0471E068));
        inline app::QuestsController__Class* get_class() {
            return il2cpp::get_class<app::QuestsController__Class>(type_info, "", "QuestsController");
        }
        inline app::QuestsController* create() {
            return il2cpp::create_object<app::QuestsController>(get_class());
        }
    } // namespace QuestsController
} // namespace app::classes::types
