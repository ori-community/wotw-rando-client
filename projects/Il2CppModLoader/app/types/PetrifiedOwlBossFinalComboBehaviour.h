#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour {
        namespace {
            inline app::PetrifiedOwlBossFinalComboBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossFinalComboBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFinalComboBehaviour__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour
} // namespace app::classes::types
