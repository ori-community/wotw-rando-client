#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsKuroGameplayController {
        namespace {
            app::MistyWoodsKuroGameplayController__Class* type_info_ref = nullptr;
        }
        app::MistyWoodsKuroGameplayController__Class** type_info = &type_info_ref;
        inline app::MistyWoodsKuroGameplayController__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsKuroGameplayController__Class>(type_info, "", "MistyWoodsKuroGameplayController");
        }
        inline app::MistyWoodsKuroGameplayController* create() {
            return il2cpp::create_object<app::MistyWoodsKuroGameplayController>(get_class());
        }
    } // namespace MistyWoodsKuroGameplayController
} // namespace app::classes::types
