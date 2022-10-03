#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsSerializationCallbackProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsSerializationCallbackProcessor__Class** type_info;
        inline app::fsSerializationCallbackProcessor__Class* get_class() {
            return il2cpp::get_class<app::fsSerializationCallbackProcessor__Class>(type_info, "FullSerializer.Internal", "fsSerializationCallbackProcessor");
        }
        inline app::fsSerializationCallbackProcessor* create() {
            return il2cpp::create_object<app::fsSerializationCallbackProcessor>(get_class());
        }
    } // namespace fsSerializationCallbackProcessor
} // namespace app::classes::types
