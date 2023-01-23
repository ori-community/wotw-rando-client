#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerAbilityStatePair__Class.h>
#include <Modloader/app/structs/PlayerAbilityStatePair.h>

namespace app::classes::types {
    namespace PlayerAbilityStatePair {
        inline app::PlayerAbilityStatePair__Class** type_info = (app::PlayerAbilityStatePair__Class**)(modloader::win::memory::resolve_rva(0x0478CC90));
        inline app::PlayerAbilityStatePair__Class* get_class() {
            return il2cpp::get_class<app::PlayerAbilityStatePair__Class>(type_info, "Moon.uberSerializationWisp", "PlayerAbilityStatePair");
        }
        inline app::PlayerAbilityStatePair* create() {
            return il2cpp::create_object<app::PlayerAbilityStatePair>(get_class());
        }
    } // namespace PlayerAbilityStatePair
} // namespace app::classes::types
