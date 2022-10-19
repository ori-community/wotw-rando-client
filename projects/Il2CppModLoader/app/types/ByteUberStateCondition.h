#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ByteUberStateCondition {
        inline app::ByteUberStateCondition__Class** type_info = (app::ByteUberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x0471DA48));
        inline app::ByteUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::ByteUberStateCondition__Class>(type_info, "", "ByteUberStateCondition");
        }
        inline app::ByteUberStateCondition* create() {
            return il2cpp::create_object<app::ByteUberStateCondition>(get_class());
        }
    } // namespace ByteUberStateCondition
} // namespace app::classes::types
