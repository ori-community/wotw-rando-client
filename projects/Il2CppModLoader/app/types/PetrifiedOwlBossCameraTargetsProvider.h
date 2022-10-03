#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossCameraTargetsProvider {
        namespace {
            app::PetrifiedOwlBossCameraTargetsProvider__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlBossCameraTargetsProvider__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossCameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossCameraTargetsProvider__Class>(type_info, "", "PetrifiedOwlBossCameraTargetsProvider");
        }
        inline app::PetrifiedOwlBossCameraTargetsProvider* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossCameraTargetsProvider>(get_class());
        }
    } // namespace PetrifiedOwlBossCameraTargetsProvider
} // namespace app::classes::types
