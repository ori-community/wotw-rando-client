#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState {
        inline app::PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState__Class** type_info = (app::PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState__Class**)(modloader::win::memory::resolve_rva(0x04725C60));
        inline app::PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "FeatherFlurryState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState
} // namespace app::classes::types
