#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinWorldState {
        inline app::SeinWorldState__Class** type_info = (app::SeinWorldState__Class**)(modloader::win::memory::resolve_rva(0x04738518));
        inline app::SeinWorldState__Class* get_class() {
            return il2cpp::get_class<app::SeinWorldState__Class>(type_info, "", "SeinWorldState");
        }
        inline app::SeinWorldState* create() {
            return il2cpp::create_object<app::SeinWorldState>(get_class());
        }
    } // namespace SeinWorldState
} // namespace app::classes::types
