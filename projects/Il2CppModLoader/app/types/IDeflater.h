#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDeflater {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDeflater__Class** type_info;
        inline app::IDeflater__Class* get_class() {
            return il2cpp::get_class<app::IDeflater__Class>(type_info, "Unity.IO.Compression", "IDeflater");
        }
    } // namespace IDeflater
} // namespace app::classes::types
