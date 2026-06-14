#pragma once
#include <Modloader/app/structs/ISerializationSurrogate.h>
#include <Modloader/app/structs/ISerializationSurrogate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISerializationSurrogate {
        inline app::ISerializationSurrogate__Class** type_info() {
            static app::ISerializationSurrogate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISerializationSurrogate__Class**)(modloader::win::memory::resolve_rva(0x0470F130));
            }
            return cache;
        }
        inline app::ISerializationSurrogate__Class* get_class() {
            return il2cpp::get_class<app::ISerializationSurrogate__Class>(type_info(), "System.Runtime.Serialization", "ISerializationSurrogate");
        }
    } // namespace ISerializationSurrogate
} // namespace app::classes::types
