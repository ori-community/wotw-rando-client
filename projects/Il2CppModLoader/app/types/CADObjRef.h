#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CADObjRef {
        inline app::CADObjRef__Class** type_info = (app::CADObjRef__Class**)(modloader::win::memory::resolve_rva(0x0471CF58));
        inline app::CADObjRef__Class* get_class() {
            return il2cpp::get_class<app::CADObjRef__Class>(type_info, "System.Runtime.Remoting.Messaging", "CADObjRef");
        }
        inline app::CADObjRef* create() {
            return il2cpp::create_object<app::CADObjRef>(get_class());
        }
    } // namespace CADObjRef
} // namespace app::classes::types
