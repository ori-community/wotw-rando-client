#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsSerializationCallbackProcessor {
        inline app::fsSerializationCallbackProcessor__Class** type_info = (app::fsSerializationCallbackProcessor__Class**)(modloader::win::memory::resolve_rva(0x0473CB08));
        inline app::fsSerializationCallbackProcessor__Class* get_class() {
            return il2cpp::get_class<app::fsSerializationCallbackProcessor__Class>(type_info, "FullSerializer.Internal", "fsSerializationCallbackProcessor");
        }
        inline app::fsSerializationCallbackProcessor* create() {
            return il2cpp::create_object<app::fsSerializationCallbackProcessor>(get_class());
        }
    } // namespace fsSerializationCallbackProcessor
} // namespace app::classes::types
