#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_States {
        inline app::KwolokBossTendrilStrikeBehaviour_States__Class** type_info = (app::KwolokBossTendrilStrikeBehaviour_States__Class**)(modloader::win::memory::resolve_rva(0x04746A78));
        inline app::KwolokBossTendrilStrikeBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_States__Class>(type_info, "", "KwolokBossTendrilStrikeBehaviour", "States");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_States* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_States>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_States
} // namespace app::classes::types
