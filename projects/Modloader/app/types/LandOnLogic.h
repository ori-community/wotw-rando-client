#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LandOnLogic {
        namespace {
            inline app::LandOnLogic__Class* type_info_ref = nullptr;
        }
        inline app::LandOnLogic__Class** type_info = &type_info_ref;
        inline app::LandOnLogic__Class* get_class() {
            return il2cpp::get_class<app::LandOnLogic__Class>(type_info, "", "LandOnLogic");
        }
        inline app::LandOnLogic* create() {
            return il2cpp::create_object<app::LandOnLogic>(get_class());
        }
    } // namespace LandOnLogic
} // namespace app::classes::types
