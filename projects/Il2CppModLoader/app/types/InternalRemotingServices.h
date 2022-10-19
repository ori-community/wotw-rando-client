#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InternalRemotingServices {
        inline app::InternalRemotingServices__Class** type_info = (app::InternalRemotingServices__Class**)(modloader::win::memory::resolve_rva(0x04760088));
        inline app::InternalRemotingServices__Class* get_class() {
            return il2cpp::get_class<app::InternalRemotingServices__Class>(type_info, "System.Runtime.Remoting", "InternalRemotingServices");
        }
        inline app::InternalRemotingServices* create() {
            return il2cpp::create_object<app::InternalRemotingServices>(get_class());
        }
    } // namespace InternalRemotingServices
} // namespace app::classes::types
