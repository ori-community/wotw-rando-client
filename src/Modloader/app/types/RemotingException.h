#pragma once
#include <Modloader/app/structs/RemotingException.h>
#include <Modloader/app/structs/RemotingException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemotingException {
        inline app::RemotingException__Class** type_info() {
            static app::RemotingException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemotingException__Class**)(modloader::win::memory::resolve_rva(0x0472A148));
            }
            return cache;
        }
        inline app::RemotingException__Class* get_class() {
            return il2cpp::get_class<app::RemotingException__Class>(type_info(), "System.Runtime.Remoting", "RemotingException");
        }
        inline app::RemotingException* create() {
            return il2cpp::create_object<app::RemotingException>(get_class());
        }
    } // namespace RemotingException
} // namespace app::classes::types
