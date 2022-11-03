#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornBugIdleBehaviour {
        namespace {
            inline app::HornBugIdleBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::HornBugIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::HornBugIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugIdleBehaviour__Class>(type_info, "", "HornBugIdleBehaviour");
        }
        inline app::HornBugIdleBehaviour* create() {
            return il2cpp::create_object<app::HornBugIdleBehaviour>(get_class());
        }
    } // namespace HornBugIdleBehaviour
} // namespace app::classes::types
