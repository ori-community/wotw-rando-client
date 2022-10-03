#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsSerializationCallbackReceiverProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsSerializationCallbackReceiverProcessor__Class** type_info;
        inline app::fsSerializationCallbackReceiverProcessor__Class* get_class() {
            return il2cpp::get_class<app::fsSerializationCallbackReceiverProcessor__Class>(type_info, "FullSerializer.Internal", "fsSerializationCallbackReceiverProcessor");
        }
        inline app::fsSerializationCallbackReceiverProcessor* create() {
            return il2cpp::create_object<app::fsSerializationCallbackReceiverProcessor>(get_class());
        }
    } // namespace fsSerializationCallbackReceiverProcessor
} // namespace app::classes::types
