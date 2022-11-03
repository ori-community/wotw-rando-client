#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SingleCallIdentity {
        inline app::SingleCallIdentity__Class** type_info = (app::SingleCallIdentity__Class**)(modloader::win::memory::resolve_rva(0x04735E30));
        inline app::SingleCallIdentity__Class* get_class() {
            return il2cpp::get_class<app::SingleCallIdentity__Class>(type_info, "System.Runtime.Remoting", "SingleCallIdentity");
        }
        inline app::SingleCallIdentity* create() {
            return il2cpp::create_object<app::SingleCallIdentity>(get_class());
        }
    } // namespace SingleCallIdentity
} // namespace app::classes::types
