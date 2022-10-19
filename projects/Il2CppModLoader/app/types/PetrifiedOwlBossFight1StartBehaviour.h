#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1StartBehaviour {
        namespace {
            inline app::PetrifiedOwlBossFight1StartBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossFight1StartBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossFight1StartBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1StartBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1StartBehaviour");
        }
        inline app::PetrifiedOwlBossFight1StartBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1StartBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1StartBehaviour
} // namespace app::classes::types
