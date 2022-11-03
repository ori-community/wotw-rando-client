#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseRaycaster__Array {
        namespace {
            inline app::BaseRaycaster__Array__Class* type_info_ref = nullptr;
        }
        inline app::BaseRaycaster__Array__Class** type_info = &type_info_ref;
        inline app::BaseRaycaster__Array__Class* get_class() {
            return il2cpp::get_class<app::BaseRaycaster__Array__Class>(type_info, "UnityEngine.EventSystems", "BaseRaycaster[]");
        }
        inline app::BaseRaycaster__Array* create() {
            return il2cpp::create_object<app::BaseRaycaster__Array>(get_class());
        }
    } // namespace BaseRaycaster__Array
} // namespace app::classes::types
