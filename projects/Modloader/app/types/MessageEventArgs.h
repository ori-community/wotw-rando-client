#pragma once
#include <Modloader/app/structs/MessageEventArgs.h>
#include <Modloader/app/structs/MessageEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageEventArgs {
        inline app::MessageEventArgs__Class** type_info() {
            static app::MessageEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MessageEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04741470));
            }
            return cache;
        }
        inline app::MessageEventArgs__Class* get_class() {
            return il2cpp::get_class<app::MessageEventArgs__Class>(type_info(), "UnityEngine.Networking.PlayerConnection", "MessageEventArgs");
        }
        inline app::MessageEventArgs* create() {
            return il2cpp::create_object<app::MessageEventArgs>(get_class());
        }
    } // namespace MessageEventArgs
} // namespace app::classes::types
