#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGlidePuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinGlidePuppet__Class** type_info;
        inline app::SeinGlidePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinGlidePuppet__Class>(type_info, "", "SeinGlidePuppet");
        }
        inline app::SeinGlidePuppet* create() {
            return il2cpp::create_object<app::SeinGlidePuppet>(get_class());
        }
    } // namespace SeinGlidePuppet
} // namespace app::classes::types
