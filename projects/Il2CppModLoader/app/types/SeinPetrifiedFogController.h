#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPetrifiedFogController {
        namespace {
            app::SeinPetrifiedFogController__Class* type_info_ref = nullptr;
        }
        app::SeinPetrifiedFogController__Class** type_info = &type_info_ref;
        inline app::SeinPetrifiedFogController__Class* get_class() {
            return il2cpp::get_class<app::SeinPetrifiedFogController__Class>(type_info, "", "SeinPetrifiedFogController");
        }
        inline app::SeinPetrifiedFogController* create() {
            return il2cpp::create_object<app::SeinPetrifiedFogController>(get_class());
        }
    } // namespace SeinPetrifiedFogController
} // namespace app::classes::types
