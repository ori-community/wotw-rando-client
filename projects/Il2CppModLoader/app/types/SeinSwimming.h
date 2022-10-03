#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSwimming {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinSwimming__Class** type_info;
        inline app::SeinSwimming__Class* get_class() {
            return il2cpp::get_class<app::SeinSwimming__Class>(type_info, "", "SeinSwimming");
        }
        inline app::SeinSwimming* create() {
            return il2cpp::create_object<app::SeinSwimming>(get_class());
        }
    } // namespace SeinSwimming
} // namespace app::classes::types
