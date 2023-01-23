#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISerializationSurrogate__Class.h>

namespace app::classes::types {
    namespace ISerializationSurrogate {
        inline app::ISerializationSurrogate__Class** type_info = (app::ISerializationSurrogate__Class**)(modloader::win::memory::resolve_rva(0x0470F130));
        inline app::ISerializationSurrogate__Class* get_class() {
            return il2cpp::get_class<app::ISerializationSurrogate__Class>(type_info, "System.Runtime.Serialization", "ISerializationSurrogate");
        }
    } // namespace ISerializationSurrogate
} // namespace app::classes::types
