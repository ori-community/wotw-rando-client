#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Mathf {
        inline app::Mathf__Class** type_info = (app::Mathf__Class**)(modloader::win::memory::resolve_rva(0x047629A8));
        inline app::Mathf__Class* get_class() {
            return il2cpp::get_class<app::Mathf__Class>(type_info, "UnityEngine", "Mathf");
        }
        inline app::Mathf* create() {
            return il2cpp::create_object<app::Mathf>(get_class());
        }
        inline app::Mathf__Boxed* box(app::Mathf value) {
            return il2cpp::box_value<app::Mathf__Boxed>(get_class(), value);
        }
    } // namespace Mathf
} // namespace app::classes::types
