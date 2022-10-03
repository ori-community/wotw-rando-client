#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinRidePuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinRidePuppet__Class** type_info;
        inline app::SeinRidePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinRidePuppet__Class>(type_info, "", "SeinRidePuppet");
        }
        inline app::SeinRidePuppet* create() {
            return il2cpp::create_object<app::SeinRidePuppet>(get_class());
        }
    } // namespace SeinRidePuppet
} // namespace app::classes::types
