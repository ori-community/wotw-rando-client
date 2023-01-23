#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Recoil__Class.h>
#include <Modloader/app/structs/Recoil.h>

namespace app::classes::types {
    namespace Recoil {
        namespace {
            inline app::Recoil__Class* type_info_ref = nullptr;
        }
        inline app::Recoil__Class** type_info = &type_info_ref;
        inline app::Recoil__Class* get_class() {
            return il2cpp::get_class<app::Recoil__Class>(type_info, "RootMotion.FinalIK", "Recoil");
        }
        inline app::Recoil* create() {
            return il2cpp::create_object<app::Recoil>(get_class());
        }
    } // namespace Recoil
} // namespace app::classes::types
