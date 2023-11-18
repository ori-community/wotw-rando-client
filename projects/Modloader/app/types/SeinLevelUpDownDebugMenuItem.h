#pragma once
#include <Modloader/app/structs/SeinLevelUpDownDebugMenuItem.h>
#include <Modloader/app/structs/SeinLevelUpDownDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLevelUpDownDebugMenuItem {
        inline app::SeinLevelUpDownDebugMenuItem__Class** type_info() {
            static app::SeinLevelUpDownDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinLevelUpDownDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047657B0));
            }
            return cache;
        }
        inline app::SeinLevelUpDownDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::SeinLevelUpDownDebugMenuItem__Class>(type_info(), "", "SeinLevelUpDownDebugMenuItem");
        }
        inline app::SeinLevelUpDownDebugMenuItem* create() {
            return il2cpp::create_object<app::SeinLevelUpDownDebugMenuItem>(get_class());
        }
    } // namespace SeinLevelUpDownDebugMenuItem
} // namespace app::classes::types
