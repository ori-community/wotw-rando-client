#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsSerializationCallbackReceiverProcessor {
        inline app::fsSerializationCallbackReceiverProcessor__Class** type_info = (app::fsSerializationCallbackReceiverProcessor__Class**)(modloader::win::memory::resolve_rva(0x047133C8));
        inline app::fsSerializationCallbackReceiverProcessor__Class* get_class() {
            return il2cpp::get_class<app::fsSerializationCallbackReceiverProcessor__Class>(type_info, "FullSerializer.Internal", "fsSerializationCallbackReceiverProcessor");
        }
        inline app::fsSerializationCallbackReceiverProcessor* create() {
            return il2cpp::create_object<app::fsSerializationCallbackReceiverProcessor>(get_class());
        }
    } // namespace fsSerializationCallbackReceiverProcessor
} // namespace app::classes::types
