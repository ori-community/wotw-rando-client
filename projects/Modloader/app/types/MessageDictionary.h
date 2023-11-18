#pragma once
#include <Modloader/app/structs/MessageDictionary.h>
#include <Modloader/app/structs/MessageDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageDictionary {
        inline app::MessageDictionary__Class** type_info() {
            static app::MessageDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MessageDictionary__Class**)(modloader::win::memory::resolve_rva(0x04797770));
            }
            return cache;
        }
        inline app::MessageDictionary__Class* get_class() {
            return il2cpp::get_class<app::MessageDictionary__Class>(type_info(), "System.Runtime.Remoting.Messaging", "MessageDictionary");
        }
        inline app::MessageDictionary* create() {
            return il2cpp::create_object<app::MessageDictionary>(get_class());
        }
    } // namespace MessageDictionary
} // namespace app::classes::types
