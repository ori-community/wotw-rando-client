#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemotingServices {
        inline app::RemotingServices__Class** type_info = (app::RemotingServices__Class**)(modloader::win::memory::resolve_rva(0x04714440));
        inline app::RemotingServices__Class* get_class() {
            return il2cpp::get_class<app::RemotingServices__Class>(type_info, "System.Runtime.Remoting", "RemotingServices");
        }
        inline app::RemotingServices* create() {
            return il2cpp::create_object<app::RemotingServices>(get_class());
        }
    } // namespace RemotingServices
} // namespace app::classes::types
