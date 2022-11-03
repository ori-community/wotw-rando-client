#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointerEventData__Array {
        namespace {
            inline app::PointerEventData__Array__Class* type_info_ref = nullptr;
        }
        inline app::PointerEventData__Array__Class** type_info = &type_info_ref;
        inline app::PointerEventData__Array__Class* get_class() {
            return il2cpp::get_class<app::PointerEventData__Array__Class>(type_info, "UnityEngine.EventSystems", "PointerEventData[]");
        }
        inline app::PointerEventData__Array* create() {
            return il2cpp::create_object<app::PointerEventData__Array>(get_class());
        }
    } // namespace PointerEventData__Array
} // namespace app::classes::types
