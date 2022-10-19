#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Convert {
        inline app::Convert__Class** type_info = (app::Convert__Class**)(modloader::win::memory::resolve_rva(0x0472F068));
        inline app::Convert__Class* get_class() {
            return il2cpp::get_class<app::Convert__Class>(type_info, "System", "Convert");
        }
        inline app::Convert* create() {
            return il2cpp::create_object<app::Convert>(get_class());
        }
    } // namespace Convert
} // namespace app::classes::types
