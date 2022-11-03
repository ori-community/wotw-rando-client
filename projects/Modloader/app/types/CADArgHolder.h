#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CADArgHolder {
        inline app::CADArgHolder__Class** type_info = (app::CADArgHolder__Class**)(modloader::win::memory::resolve_rva(0x0472BD98));
        inline app::CADArgHolder__Class* get_class() {
            return il2cpp::get_class<app::CADArgHolder__Class>(type_info, "System.Runtime.Remoting.Messaging", "CADArgHolder");
        }
        inline app::CADArgHolder* create() {
            return il2cpp::create_object<app::CADArgHolder>(get_class());
        }
    } // namespace CADArgHolder
} // namespace app::classes::types
