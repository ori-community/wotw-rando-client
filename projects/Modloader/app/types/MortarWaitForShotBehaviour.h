#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MortarWaitForShotBehaviour__Class.h>
#include <Modloader/app/structs/MortarWaitForShotBehaviour.h>

namespace app::classes::types {
    namespace MortarWaitForShotBehaviour {
        namespace {
            inline app::MortarWaitForShotBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MortarWaitForShotBehaviour__Class** type_info = &type_info_ref;
        inline app::MortarWaitForShotBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MortarWaitForShotBehaviour__Class>(type_info, "", "MortarWaitForShotBehaviour");
        }
        inline app::MortarWaitForShotBehaviour* create() {
            return il2cpp::create_object<app::MortarWaitForShotBehaviour>(get_class());
        }
    } // namespace MortarWaitForShotBehaviour
} // namespace app::classes::types
