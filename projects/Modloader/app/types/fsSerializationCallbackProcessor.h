#pragma once
#include <Modloader/app/structs/fsSerializationCallbackProcessor.h>
#include <Modloader/app/structs/fsSerializationCallbackProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsSerializationCallbackProcessor {
        inline app::fsSerializationCallbackProcessor__Class** type_info() {
            static app::fsSerializationCallbackProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsSerializationCallbackProcessor__Class**)(modloader::win::memory::resolve_rva(0x0473CB08));
            }
            return cache;
        }
        inline app::fsSerializationCallbackProcessor__Class* get_class() {
            return il2cpp::get_class<app::fsSerializationCallbackProcessor__Class>(type_info(), "FullSerializer.Internal", "fsSerializationCallbackProcessor");
        }
        inline app::fsSerializationCallbackProcessor* create() {
            return il2cpp::create_object<app::fsSerializationCallbackProcessor>(get_class());
        }
    } // namespace fsSerializationCallbackProcessor
} // namespace app::classes::types
