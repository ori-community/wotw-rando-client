#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornBugGuardBehaviour {
        namespace {
            inline app::HornBugGuardBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::HornBugGuardBehaviour__Class** type_info = &type_info_ref;
        inline app::HornBugGuardBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugGuardBehaviour__Class>(type_info, "", "HornBugGuardBehaviour");
        }
        inline app::HornBugGuardBehaviour* create() {
            return il2cpp::create_object<app::HornBugGuardBehaviour>(get_class());
        }
    } // namespace HornBugGuardBehaviour
} // namespace app::classes::types
