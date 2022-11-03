#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemotingException {
        inline app::RemotingException__Class** type_info = (app::RemotingException__Class**)(modloader::win::memory::resolve_rva(0x0472A148));
        inline app::RemotingException__Class* get_class() {
            return il2cpp::get_class<app::RemotingException__Class>(type_info, "System.Runtime.Remoting", "RemotingException");
        }
        inline app::RemotingException* create() {
            return il2cpp::create_object<app::RemotingException>(get_class());
        }
    } // namespace RemotingException
} // namespace app::classes::types
