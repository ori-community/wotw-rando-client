#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CADMethodReturnMessage {
        inline app::CADMethodReturnMessage__Class** type_info = (app::CADMethodReturnMessage__Class**)(modloader::win::memory::resolve_rva(0x04709B20));
        inline app::CADMethodReturnMessage__Class* get_class() {
            return il2cpp::get_class<app::CADMethodReturnMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "CADMethodReturnMessage");
        }
        inline app::CADMethodReturnMessage* create() {
            return il2cpp::create_object<app::CADMethodReturnMessage>(get_class());
        }
    } // namespace CADMethodReturnMessage
} // namespace app::classes::types
