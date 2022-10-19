#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CatAndMouseKuroKillController {
        namespace {
            inline app::CatAndMouseKuroKillController__Class* type_info_ref = nullptr;
        }
        inline app::CatAndMouseKuroKillController__Class** type_info = &type_info_ref;
        inline app::CatAndMouseKuroKillController__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseKuroKillController__Class>(type_info, "", "CatAndMouseKuroKillController");
        }
        inline app::CatAndMouseKuroKillController* create() {
            return il2cpp::create_object<app::CatAndMouseKuroKillController>(get_class());
        }
    } // namespace CatAndMouseKuroKillController
} // namespace app::classes::types
