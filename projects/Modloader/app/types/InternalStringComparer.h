#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InternalStringComparer {
        inline app::InternalStringComparer__Class** type_info = (app::InternalStringComparer__Class**)(modloader::win::memory::resolve_rva(0x04753200));
        inline app::InternalStringComparer__Class* get_class() {
            return il2cpp::get_class<app::InternalStringComparer__Class>(type_info, "System.Collections.Generic", "InternalStringComparer");
        }
        inline app::InternalStringComparer* create() {
            return il2cpp::create_object<app::InternalStringComparer>(get_class());
        }
    } // namespace InternalStringComparer
} // namespace app::classes::types
