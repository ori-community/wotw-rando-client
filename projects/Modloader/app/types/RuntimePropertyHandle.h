#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimePropertyHandle {
        inline app::RuntimePropertyHandle__Class** type_info = (app::RuntimePropertyHandle__Class**)(modloader::win::memory::resolve_rva(0x0471F998));
        inline app::RuntimePropertyHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimePropertyHandle__Class>(type_info, "Mono", "RuntimePropertyHandle");
        }
        inline app::RuntimePropertyHandle* create() {
            return il2cpp::create_object<app::RuntimePropertyHandle>(get_class());
        }
        inline app::RuntimePropertyHandle__Boxed* box(app::RuntimePropertyHandle value) {
            return il2cpp::box_value<app::RuntimePropertyHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimePropertyHandle
} // namespace app::classes::types
