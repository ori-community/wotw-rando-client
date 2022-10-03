#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Inflater {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Inflater__Class** type_info;
        inline app::Inflater__Class* get_class() {
            return il2cpp::get_class<app::Inflater__Class>(type_info, "Unity.IO.Compression", "Inflater");
        }
        inline app::Inflater* create() {
            return il2cpp::create_object<app::Inflater>(get_class());
        }
    } // namespace Inflater
} // namespace app::classes::types
