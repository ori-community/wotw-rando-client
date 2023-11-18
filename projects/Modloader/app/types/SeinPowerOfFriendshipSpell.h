#pragma once
#include <Modloader/app/structs/SeinPowerOfFriendshipSpell.h>
#include <Modloader/app/structs/SeinPowerOfFriendshipSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPowerOfFriendshipSpell {
        inline app::SeinPowerOfFriendshipSpell__Class** type_info() {
            static app::SeinPowerOfFriendshipSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinPowerOfFriendshipSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinPowerOfFriendshipSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinPowerOfFriendshipSpell__Class>(type_info(), "", "SeinPowerOfFriendshipSpell");
        }
        inline app::SeinPowerOfFriendshipSpell* create() {
            return il2cpp::create_object<app::SeinPowerOfFriendshipSpell>(get_class());
        }
    } // namespace SeinPowerOfFriendshipSpell
} // namespace app::classes::types
