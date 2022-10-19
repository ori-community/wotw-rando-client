#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ByteUberState {
        inline app::ByteUberState__Class** type_info = (app::ByteUberState__Class**)(modloader::win::memory::resolve_rva(0x04798970));
        inline app::ByteUberState__Class* get_class() {
            return il2cpp::get_class<app::ByteUberState__Class>(type_info, "Moon", "ByteUberState");
        }
        inline app::ByteUberState* create() {
            return il2cpp::create_object<app::ByteUberState>(get_class());
        }
    } // namespace ByteUberState
} // namespace app::classes::types
