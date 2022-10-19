#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsDateConverter {
        inline app::fsDateConverter__Class** type_info = (app::fsDateConverter__Class**)(modloader::win::memory::resolve_rva(0x0470E880));
        inline app::fsDateConverter__Class* get_class() {
            return il2cpp::get_class<app::fsDateConverter__Class>(type_info, "FullSerializer.Internal", "fsDateConverter");
        }
        inline app::fsDateConverter* create() {
            return il2cpp::create_object<app::fsDateConverter>(get_class());
        }
    } // namespace fsDateConverter
} // namespace app::classes::types
