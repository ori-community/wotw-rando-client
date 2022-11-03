#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CADMethodRef {
        inline app::CADMethodRef__Class** type_info = (app::CADMethodRef__Class**)(modloader::win::memory::resolve_rva(0x0475E580));
        inline app::CADMethodRef__Class* get_class() {
            return il2cpp::get_class<app::CADMethodRef__Class>(type_info, "System.Runtime.Remoting.Messaging", "CADMethodRef");
        }
        inline app::CADMethodRef* create() {
            return il2cpp::create_object<app::CADMethodRef>(get_class());
        }
    } // namespace CADMethodRef
} // namespace app::classes::types
