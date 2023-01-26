#pragma once
#include <Modloader/app/structs/MessageEnd.h>
#include <Modloader/app/structs/MessageEnd__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageEnd {
        inline app::MessageEnd__Class** type_info() {
            static app::MessageEnd__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MessageEnd__Class**)(modloader::win::memory::resolve_rva(0x04725490));
            }
            return cache;
        }
        inline app::MessageEnd__Class* get_class() {
            return il2cpp::get_class<app::MessageEnd__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "MessageEnd");
        }
        inline app::MessageEnd* create() {
            return il2cpp::create_object<app::MessageEnd>(get_class());
        }
    } // namespace MessageEnd
} // namespace app::classes::types
