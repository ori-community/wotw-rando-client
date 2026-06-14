#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossCameraTargetsProvider.h>
#include <Modloader/app/structs/PetrifiedOwlBossCameraTargetsProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossCameraTargetsProvider {
        inline app::PetrifiedOwlBossCameraTargetsProvider__Class** type_info() {
            static app::PetrifiedOwlBossCameraTargetsProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossCameraTargetsProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossCameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossCameraTargetsProvider__Class>(type_info(), "", "PetrifiedOwlBossCameraTargetsProvider");
        }
        inline app::PetrifiedOwlBossCameraTargetsProvider* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossCameraTargetsProvider>(get_class());
        }
    } // namespace PetrifiedOwlBossCameraTargetsProvider
} // namespace app::classes::types
