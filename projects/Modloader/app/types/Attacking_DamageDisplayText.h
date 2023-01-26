#pragma once
#include <Modloader/app/structs/Attacking_DamageDisplayText.h>
#include <Modloader/app/structs/Attacking_DamageDisplayText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Attacking_DamageDisplayText {
        inline app::Attacking_DamageDisplayText__Class** type_info() {
            static app::Attacking_DamageDisplayText__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Attacking_DamageDisplayText__Class**)(modloader::win::memory::resolve_rva(0x0478DC58));
            }
            return cache;
        }
        inline app::Attacking_DamageDisplayText__Class* get_class() {
            return il2cpp::get_nested_class<app::Attacking_DamageDisplayText__Class>(type_info(), "Game", "Attacking", "DamageDisplayText");
        }
        inline app::Attacking_DamageDisplayText* create() {
            return il2cpp::create_object<app::Attacking_DamageDisplayText>(get_class());
        }
    } // namespace Attacking_DamageDisplayText
} // namespace app::classes::types
