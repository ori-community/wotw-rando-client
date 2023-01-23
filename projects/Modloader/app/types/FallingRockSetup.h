#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FallingRockSetup__Class.h>
#include <Modloader/app/structs/FallingRockSetup.h>

namespace app::classes::types {
    namespace FallingRockSetup {
        namespace {
            inline app::FallingRockSetup__Class* type_info_ref = nullptr;
        }
        inline app::FallingRockSetup__Class** type_info = &type_info_ref;
        inline app::FallingRockSetup__Class* get_class() {
            return il2cpp::get_class<app::FallingRockSetup__Class>(type_info, "", "FallingRockSetup");
        }
        inline app::FallingRockSetup* create() {
            return il2cpp::create_object<app::FallingRockSetup>(get_class());
        }
    } // namespace FallingRockSetup
} // namespace app::classes::types
