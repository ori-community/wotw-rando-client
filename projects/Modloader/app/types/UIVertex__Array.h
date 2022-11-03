#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UIVertex__Array {
        inline app::UIVertex__Array__Class** type_info = (app::UIVertex__Array__Class**)(modloader::win::memory::resolve_rva(0x04713A10));
        inline app::UIVertex__Array__Class* get_class() {
            return il2cpp::get_class<app::UIVertex__Array__Class>(type_info, "UnityEngine", "UIVertex[]");
        }
        inline app::UIVertex__Array* create() {
            return il2cpp::create_object<app::UIVertex__Array>(get_class());
        }
    } // namespace UIVertex__Array
} // namespace app::classes::types
