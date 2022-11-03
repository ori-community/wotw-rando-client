#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageDictionary {
        inline app::MessageDictionary__Class** type_info = (app::MessageDictionary__Class**)(modloader::win::memory::resolve_rva(0x04797770));
        inline app::MessageDictionary__Class* get_class() {
            return il2cpp::get_class<app::MessageDictionary__Class>(type_info, "System.Runtime.Remoting.Messaging", "MessageDictionary");
        }
        inline app::MessageDictionary* create() {
            return il2cpp::create_object<app::MessageDictionary>(get_class());
        }
    } // namespace MessageDictionary
} // namespace app::classes::types
