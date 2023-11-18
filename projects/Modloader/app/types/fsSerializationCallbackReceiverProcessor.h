#pragma once
#include <Modloader/app/structs/fsSerializationCallbackReceiverProcessor.h>
#include <Modloader/app/structs/fsSerializationCallbackReceiverProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsSerializationCallbackReceiverProcessor {
        inline app::fsSerializationCallbackReceiverProcessor__Class** type_info() {
            static app::fsSerializationCallbackReceiverProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsSerializationCallbackReceiverProcessor__Class**)(modloader::win::memory::resolve_rva(0x047133C8));
            }
            return cache;
        }
        inline app::fsSerializationCallbackReceiverProcessor__Class* get_class() {
            return il2cpp::get_class<app::fsSerializationCallbackReceiverProcessor__Class>(type_info(), "FullSerializer.Internal", "fsSerializationCallbackReceiverProcessor");
        }
        inline app::fsSerializationCallbackReceiverProcessor* create() {
            return il2cpp::create_object<app::fsSerializationCallbackReceiverProcessor>(get_class());
        }
    } // namespace fsSerializationCallbackReceiverProcessor
} // namespace app::classes::types
