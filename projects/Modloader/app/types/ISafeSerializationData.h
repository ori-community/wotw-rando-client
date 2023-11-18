#pragma once
#include <Modloader/app/structs/ISafeSerializationData.h>
#include <Modloader/app/structs/ISafeSerializationData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISafeSerializationData {
        inline app::ISafeSerializationData__Class** type_info() {
            static app::ISafeSerializationData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISafeSerializationData__Class**)(modloader::win::memory::resolve_rva(0x0474E3A8));
            }
            return cache;
        }
        inline app::ISafeSerializationData__Class* get_class() {
            return il2cpp::get_class<app::ISafeSerializationData__Class>(type_info(), "System.Runtime.Serialization", "ISafeSerializationData");
        }
    } // namespace ISafeSerializationData
} // namespace app::classes::types
