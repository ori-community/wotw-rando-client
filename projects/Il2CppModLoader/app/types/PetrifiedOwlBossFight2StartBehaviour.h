#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight2StartBehaviour {
        namespace {
            app::PetrifiedOwlBossFight2StartBehaviour__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlBossFight2StartBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossFight2StartBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight2StartBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight2StartBehaviour");
        }
        inline app::PetrifiedOwlBossFight2StartBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight2StartBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight2StartBehaviour
} // namespace app::classes::types
