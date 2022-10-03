#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinFeatherFlapPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinFeatherFlapPuppet__Class** type_info;
        inline app::SeinFeatherFlapPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinFeatherFlapPuppet__Class>(type_info, "", "SeinFeatherFlapPuppet");
        }
        inline app::SeinFeatherFlapPuppet* create() {
            return il2cpp::create_object<app::SeinFeatherFlapPuppet>(get_class());
        }
    } // namespace SeinFeatherFlapPuppet
} // namespace app::classes::types
