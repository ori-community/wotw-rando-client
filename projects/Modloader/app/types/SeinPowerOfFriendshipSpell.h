#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinPowerOfFriendshipSpell {
        namespace {
            inline app::SeinPowerOfFriendshipSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinPowerOfFriendshipSpell__Class** type_info = &type_info_ref;
        inline app::SeinPowerOfFriendshipSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinPowerOfFriendshipSpell__Class>(type_info, "", "SeinPowerOfFriendshipSpell");
        }
        inline app::SeinPowerOfFriendshipSpell* create() {
            return il2cpp::create_object<app::SeinPowerOfFriendshipSpell>(get_class());
        }
    } // namespace SeinPowerOfFriendshipSpell
} // namespace app::classes::types
