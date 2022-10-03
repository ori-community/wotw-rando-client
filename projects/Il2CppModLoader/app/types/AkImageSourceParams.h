#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkImageSourceParams {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkImageSourceParams__Class** type_info;
        inline app::AkImageSourceParams__Class* get_class() {
            return il2cpp::get_class<app::AkImageSourceParams__Class>(type_info, "", "AkImageSourceParams");
        }
        inline app::AkImageSourceParams* create() {
            return il2cpp::create_object<app::AkImageSourceParams>(get_class());
        }
    } // namespace AkImageSourceParams
} // namespace app::classes::types
