#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoveToBehaviour {
        namespace {
            inline app::MoveToBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MoveToBehaviour__Class** type_info = &type_info_ref;
        inline app::MoveToBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MoveToBehaviour__Class>(type_info, "Moon", "MoveToBehaviour");
        }
        inline app::MoveToBehaviour* create() {
            return il2cpp::create_object<app::MoveToBehaviour>(get_class());
        }
    } // namespace MoveToBehaviour
} // namespace app::classes::types
