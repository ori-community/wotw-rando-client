#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ByteEqualityComparer {
        inline app::ByteEqualityComparer__Class** type_info = (app::ByteEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x0470B558));
        inline app::ByteEqualityComparer__Class* get_class() {
            return il2cpp::get_class<app::ByteEqualityComparer__Class>(type_info, "System.Collections.Generic", "ByteEqualityComparer");
        }
        inline app::ByteEqualityComparer* create() {
            return il2cpp::create_object<app::ByteEqualityComparer>(get_class());
        }
    } // namespace ByteEqualityComparer
} // namespace app::classes::types
