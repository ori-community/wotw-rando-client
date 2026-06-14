#pragma once
#include <Modloader/app/structs/RemotingSurrogate.h>
#include <Modloader/app/structs/RemotingSurrogate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemotingSurrogate {
        inline app::RemotingSurrogate__Class** type_info() {
            static app::RemotingSurrogate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemotingSurrogate__Class**)(modloader::win::memory::resolve_rva(0x047338D0));
            }
            return cache;
        }
        inline app::RemotingSurrogate__Class* get_class() {
            return il2cpp::get_class<app::RemotingSurrogate__Class>(type_info(), "System.Runtime.Remoting.Messaging", "RemotingSurrogate");
        }
        inline app::RemotingSurrogate* create() {
            return il2cpp::create_object<app::RemotingSurrogate>(get_class());
        }
    } // namespace RemotingSurrogate
} // namespace app::classes::types
