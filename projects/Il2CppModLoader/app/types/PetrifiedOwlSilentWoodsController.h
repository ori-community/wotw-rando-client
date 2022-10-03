#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController {
        namespace {
            app::PetrifiedOwlSilentWoodsController__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlSilentWoodsController__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlSilentWoodsController__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlSilentWoodsController__Class>(type_info, "", "PetrifiedOwlSilentWoodsController");
        }
        inline app::PetrifiedOwlSilentWoodsController* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController
} // namespace app::classes::types
