#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MudkisserFallReactionBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MudkisserFallReactionBehaviour_c__Class** type_info;
        inline app::MudkisserFallReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MudkisserFallReactionBehaviour_c__Class>(type_info, "", "MudkisserFallReactionBehaviour", "<>c");
        }
        inline app::MudkisserFallReactionBehaviour_c* create() {
            return il2cpp::create_object<app::MudkisserFallReactionBehaviour_c>(get_class());
        }
    } // namespace MudkisserFallReactionBehaviour_c
} // namespace app::classes::types
