#pragma once
#include <Modloader/app/structs/FallingRockSetup.h>
#include <Modloader/app/structs/FallingRockSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FallingRockSetup {
        inline app::FallingRockSetup__Class** type_info() {
            static app::FallingRockSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FallingRockSetup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FallingRockSetup__Class* get_class() {
            return il2cpp::get_class<app::FallingRockSetup__Class>(type_info(), "", "FallingRockSetup");
        }
        inline app::FallingRockSetup* create() {
            return il2cpp::create_object<app::FallingRockSetup>(get_class());
        }
    } // namespace FallingRockSetup
} // namespace app::classes::types
