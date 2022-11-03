#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UIBehaviour {
        namespace {
            inline app::UIBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::UIBehaviour__Class** type_info = &type_info_ref;
        inline app::UIBehaviour__Class* get_class() {
            return il2cpp::get_class<app::UIBehaviour__Class>(type_info, "UnityEngine.EventSystems", "UIBehaviour");
        }
        inline app::UIBehaviour* create() {
            return il2cpp::create_object<app::UIBehaviour>(get_class());
        }
    } // namespace UIBehaviour
} // namespace app::classes::types
