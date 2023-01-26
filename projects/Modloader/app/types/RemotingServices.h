#pragma once
#include <Modloader/app/structs/RemotingServices.h>
#include <Modloader/app/structs/RemotingServices__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemotingServices {
        inline app::RemotingServices__Class** type_info() {
            static app::RemotingServices__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemotingServices__Class**)(modloader::win::memory::resolve_rva(0x04714440));
            }
            return cache;
        }
        inline app::RemotingServices__Class* get_class() {
            return il2cpp::get_class<app::RemotingServices__Class>(type_info(), "System.Runtime.Remoting", "RemotingServices");
        }
        inline app::RemotingServices* create() {
            return il2cpp::create_object<app::RemotingServices>(get_class());
        }
    } // namespace RemotingServices
} // namespace app::classes::types
