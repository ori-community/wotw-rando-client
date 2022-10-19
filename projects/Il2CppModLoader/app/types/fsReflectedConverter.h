#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsReflectedConverter {
        inline app::fsReflectedConverter__Class** type_info = (app::fsReflectedConverter__Class**)(modloader::win::memory::resolve_rva(0x0473C430));
        inline app::fsReflectedConverter__Class* get_class() {
            return il2cpp::get_class<app::fsReflectedConverter__Class>(type_info, "FullSerializer.Internal", "fsReflectedConverter");
        }
        inline app::fsReflectedConverter* create() {
            return il2cpp::create_object<app::fsReflectedConverter>(get_class());
        }
    } // namespace fsReflectedConverter
} // namespace app::classes::types
