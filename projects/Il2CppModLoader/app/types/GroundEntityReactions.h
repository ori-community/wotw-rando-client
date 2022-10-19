#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundEntityReactions {
        inline app::GroundEntityReactions__Class** type_info = (app::GroundEntityReactions__Class**)(modloader::win::memory::resolve_rva(0x04777100));
        inline app::GroundEntityReactions__Class* get_class() {
            return il2cpp::get_class<app::GroundEntityReactions__Class>(type_info, "", "GroundEntityReactions");
        }
        inline app::GroundEntityReactions* create() {
            return il2cpp::create_object<app::GroundEntityReactions>(get_class());
        }
    } // namespace GroundEntityReactions
} // namespace app::classes::types
