#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CADMethodCallMessage {
        inline app::CADMethodCallMessage__Class** type_info = (app::CADMethodCallMessage__Class**)(modloader::win::memory::resolve_rva(0x0475F090));
        inline app::CADMethodCallMessage__Class* get_class() {
            return il2cpp::get_class<app::CADMethodCallMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "CADMethodCallMessage");
        }
        inline app::CADMethodCallMessage* create() {
            return il2cpp::create_object<app::CADMethodCallMessage>(get_class());
        }
    } // namespace CADMethodCallMessage
} // namespace app::classes::types
