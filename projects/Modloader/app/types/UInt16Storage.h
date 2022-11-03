#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UInt16Storage {
        inline app::UInt16Storage__Class** type_info = (app::UInt16Storage__Class**)(modloader::win::memory::resolve_rva(0x04721F40));
        inline app::UInt16Storage__Class* get_class() {
            return il2cpp::get_class<app::UInt16Storage__Class>(type_info, "System.Data.Common", "UInt16Storage");
        }
        inline app::UInt16Storage* create() {
            return il2cpp::create_object<app::UInt16Storage>(get_class());
        }
    } // namespace UInt16Storage
} // namespace app::classes::types
