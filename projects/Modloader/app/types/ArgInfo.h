#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArgInfo {
        inline app::ArgInfo__Class** type_info = (app::ArgInfo__Class**)(modloader::win::memory::resolve_rva(0x047080B0));
        inline app::ArgInfo__Class* get_class() {
            return il2cpp::get_class<app::ArgInfo__Class>(type_info, "System.Runtime.Remoting.Messaging", "ArgInfo");
        }
        inline app::ArgInfo* create() {
            return il2cpp::create_object<app::ArgInfo>(get_class());
        }
    } // namespace ArgInfo
} // namespace app::classes::types
