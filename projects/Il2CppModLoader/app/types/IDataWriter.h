#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDataWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDataWriter__Class** type_info;
        inline app::IDataWriter__Class* get_class() {
            return il2cpp::get_class<app::IDataWriter__Class>(type_info, "Moon.Network.Web", "IDataWriter");
        }
        inline app::IDataWriter* create() {
            return il2cpp::create_object<app::IDataWriter>(get_class());
        }
    } // namespace IDataWriter
} // namespace app::classes::types
