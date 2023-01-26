#pragma once
#include <Modloader/app/structs/SafeSerializationEventArgs.h>
#include <Modloader/app/structs/SafeSerializationEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeSerializationEventArgs {
        inline app::SafeSerializationEventArgs__Class** type_info() {
            static app::SafeSerializationEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SafeSerializationEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0475EBC0));
            }
            return cache;
        }
        inline app::SafeSerializationEventArgs__Class* get_class() {
            return il2cpp::get_class<app::SafeSerializationEventArgs__Class>(type_info(), "System.Runtime.Serialization", "SafeSerializationEventArgs");
        }
        inline app::SafeSerializationEventArgs* create() {
            return il2cpp::create_object<app::SafeSerializationEventArgs>(get_class());
        }
    } // namespace SafeSerializationEventArgs
} // namespace app::classes::types
