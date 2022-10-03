#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MudkisserDeathReactionBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MudkisserDeathReactionBehaviour_c__Class** type_info;
        inline app::MudkisserDeathReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MudkisserDeathReactionBehaviour_c__Class>(type_info, "", "MudkisserDeathReactionBehaviour", "<>c");
        }
        inline app::MudkisserDeathReactionBehaviour_c* create() {
            return il2cpp::create_object<app::MudkisserDeathReactionBehaviour_c>(get_class());
        }
    } // namespace MudkisserDeathReactionBehaviour_c
} // namespace app::classes::types
