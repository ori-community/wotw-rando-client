#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaycastResult__Class.h>
#include <Modloader/app/structs/RaycastResult.h>
#include <Modloader/app/structs/RaycastResult__Boxed.h>
#include <Modloader/app/structs/RaycastResult__Array.h>

namespace app::classes::types {
    namespace RaycastResult {
        inline app::RaycastResult__Class** type_info = (app::RaycastResult__Class**)(modloader::win::memory::resolve_rva(0x0471CED8));
        inline app::RaycastResult__Class* get_class() {
            return il2cpp::get_class<app::RaycastResult__Class>(type_info, "UnityEngine.EventSystems", "RaycastResult");
        }
        inline app::RaycastResult* create() {
            return il2cpp::create_object<app::RaycastResult>(get_class());
        }
        inline app::RaycastResult__Boxed* box(app::RaycastResult value) {
            return il2cpp::box_value<app::RaycastResult__Boxed>(get_class(), value);
        }
        inline app::RaycastResult__Array* create_array(int size) {
            return il2cpp::array_new<app::RaycastResult__Array>(get_class(), size);
        }
        inline app::RaycastResult__Array* create_array(const std::vector<app::RaycastResult>& items) {
            return il2cpp::array_new<app::RaycastResult__Array>(get_class(), items);
        }
    } // namespace RaycastResult
} // namespace app::classes::types
