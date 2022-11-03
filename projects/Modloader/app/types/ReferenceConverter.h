#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReferenceConverter {
        inline app::ReferenceConverter__Class** type_info = (app::ReferenceConverter__Class**)(modloader::win::memory::resolve_rva(0x04792088));
        inline app::ReferenceConverter__Class* get_class() {
            return il2cpp::get_class<app::ReferenceConverter__Class>(type_info, "System.ComponentModel", "ReferenceConverter");
        }
        inline app::ReferenceConverter* create() {
            return il2cpp::create_object<app::ReferenceConverter>(get_class());
        }
    } // namespace ReferenceConverter
} // namespace app::classes::types
