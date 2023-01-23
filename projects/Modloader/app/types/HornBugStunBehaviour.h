#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HornBugStunBehaviour__Class.h>
#include <Modloader/app/structs/HornBugStunBehaviour.h>

namespace app::classes::types {
    namespace HornBugStunBehaviour {
        namespace {
            inline app::HornBugStunBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::HornBugStunBehaviour__Class** type_info = &type_info_ref;
        inline app::HornBugStunBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugStunBehaviour__Class>(type_info, "Moon", "HornBugStunBehaviour");
        }
        inline app::HornBugStunBehaviour* create() {
            return il2cpp::create_object<app::HornBugStunBehaviour>(get_class());
        }
    } // namespace HornBugStunBehaviour
} // namespace app::classes::types
