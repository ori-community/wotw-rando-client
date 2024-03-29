#pragma once
#include <Modloader/app/structs/MonoMethodMessage.h>
#include <Modloader/app/structs/MonoMethodMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoMethodMessage {
        inline app::MonoMethodMessage__Class** type_info() {
            static app::MonoMethodMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoMethodMessage__Class**)(modloader::win::memory::resolve_rva(0x0470F938));
            }
            return cache;
        }
        inline app::MonoMethodMessage__Class* get_class() {
            return il2cpp::get_class<app::MonoMethodMessage__Class>(type_info(), "System.Runtime.Remoting.Messaging", "MonoMethodMessage");
        }
        inline app::MonoMethodMessage* create() {
            return il2cpp::create_object<app::MonoMethodMessage>(get_class());
        }
    } // namespace MonoMethodMessage
} // namespace app::classes::types
