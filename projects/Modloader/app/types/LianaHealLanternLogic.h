#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LianaHealLanternLogic {
        inline app::LianaHealLanternLogic__Class** type_info = (app::LianaHealLanternLogic__Class**)(modloader::win::memory::resolve_rva(0x0471AA38));
        inline app::LianaHealLanternLogic__Class* get_class() {
            return il2cpp::get_class<app::LianaHealLanternLogic__Class>(type_info, "", "LianaHealLanternLogic");
        }
        inline app::LianaHealLanternLogic* create() {
            return il2cpp::create_object<app::LianaHealLanternLogic>(get_class());
        }
    } // namespace LianaHealLanternLogic
} // namespace app::classes::types
