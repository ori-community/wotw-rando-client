#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSwimmingPuppet {
        inline app::SeinSwimmingPuppet__Class** type_info = (app::SeinSwimmingPuppet__Class**)(modloader::win::memory::resolve_rva(0x047550A0));
        inline app::SeinSwimmingPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinSwimmingPuppet__Class>(type_info, "", "SeinSwimmingPuppet");
        }
        inline app::SeinSwimmingPuppet* create() {
            return il2cpp::create_object<app::SeinSwimmingPuppet>(get_class());
        }
    } // namespace SeinSwimmingPuppet
} // namespace app::classes::types
