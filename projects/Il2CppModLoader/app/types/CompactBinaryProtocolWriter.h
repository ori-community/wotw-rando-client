#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompactBinaryProtocolWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompactBinaryProtocolWriter__Class** type_info;
        inline app::CompactBinaryProtocolWriter__Class* get_class() {
            return il2cpp::get_class<app::CompactBinaryProtocolWriter__Class>(type_info, "Microsoft.Applications.Events", "CompactBinaryProtocolWriter");
        }
        inline app::CompactBinaryProtocolWriter* create() {
            return il2cpp::create_object<app::CompactBinaryProtocolWriter>(get_class());
        }
    } // namespace CompactBinaryProtocolWriter
} // namespace app::classes::types
