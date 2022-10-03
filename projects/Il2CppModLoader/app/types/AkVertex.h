#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkVertex {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkVertex__Class** type_info;
        inline app::AkVertex__Class* get_class() {
            return il2cpp::get_class<app::AkVertex__Class>(type_info, "", "AkVertex");
        }
        inline app::AkVertex* create() {
            return il2cpp::create_object<app::AkVertex>(get_class());
        }
    } // namespace AkVertex
} // namespace app::classes::types
