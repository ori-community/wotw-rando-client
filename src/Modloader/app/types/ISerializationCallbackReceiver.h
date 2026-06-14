#pragma once
#include <Modloader/app/structs/ISerializationCallbackReceiver.h>
#include <Modloader/app/structs/ISerializationCallbackReceiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISerializationCallbackReceiver {
        inline app::ISerializationCallbackReceiver__Class** type_info() {
            static app::ISerializationCallbackReceiver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISerializationCallbackReceiver__Class**)(modloader::win::memory::resolve_rva(0x047349D0));
            }
            return cache;
        }
        inline app::ISerializationCallbackReceiver__Class* get_class() {
            return il2cpp::get_class<app::ISerializationCallbackReceiver__Class>(type_info(), "UnityEngine", "ISerializationCallbackReceiver");
        }
    } // namespace ISerializationCallbackReceiver
} // namespace app::classes::types
