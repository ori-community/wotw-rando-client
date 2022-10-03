#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSwimmingPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinSwimmingPuppet__Class** type_info;
        inline app::SeinSwimmingPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinSwimmingPuppet__Class>(type_info, "", "SeinSwimmingPuppet");
        }
        inline app::SeinSwimmingPuppet* create() {
            return il2cpp::create_object<app::SeinSwimmingPuppet>(get_class());
        }
    } // namespace SeinSwimmingPuppet
} // namespace app::classes::types
