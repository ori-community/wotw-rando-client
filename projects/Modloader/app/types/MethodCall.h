#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MethodCall__Class.h>
#include <Modloader/app/structs/MethodCall.h>

namespace app::classes::types {
    namespace MethodCall {
        inline app::MethodCall__Class** type_info = (app::MethodCall__Class**)(modloader::win::memory::resolve_rva(0x04773EB0));
        inline app::MethodCall__Class* get_class() {
            return il2cpp::get_class<app::MethodCall__Class>(type_info, "System.Runtime.Remoting.Messaging", "MethodCall");
        }
        inline app::MethodCall* create() {
            return il2cpp::create_object<app::MethodCall>(get_class());
        }
    } // namespace MethodCall
} // namespace app::classes::types
