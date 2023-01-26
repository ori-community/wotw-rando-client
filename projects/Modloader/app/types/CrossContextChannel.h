#pragma once
#include <Modloader/app/structs/CrossContextChannel.h>
#include <Modloader/app/structs/CrossContextChannel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossContextChannel {
        inline app::CrossContextChannel__Class** type_info() {
            static app::CrossContextChannel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CrossContextChannel__Class**)(modloader::win::memory::resolve_rva(0x047116A0));
            }
            return cache;
        }
        inline app::CrossContextChannel__Class* get_class() {
            return il2cpp::get_class<app::CrossContextChannel__Class>(type_info(), "System.Runtime.Remoting.Contexts", "CrossContextChannel");
        }
        inline app::CrossContextChannel* create() {
            return il2cpp::create_object<app::CrossContextChannel>(get_class());
        }
    } // namespace CrossContextChannel
} // namespace app::classes::types
