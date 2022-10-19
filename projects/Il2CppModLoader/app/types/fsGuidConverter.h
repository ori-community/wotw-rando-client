#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsGuidConverter {
        inline app::fsGuidConverter__Class** type_info = (app::fsGuidConverter__Class**)(modloader::win::memory::resolve_rva(0x047161A8));
        inline app::fsGuidConverter__Class* get_class() {
            return il2cpp::get_class<app::fsGuidConverter__Class>(type_info, "FullSerializer.Internal", "fsGuidConverter");
        }
        inline app::fsGuidConverter* create() {
            return il2cpp::create_object<app::fsGuidConverter>(get_class());
        }
    } // namespace fsGuidConverter
} // namespace app::classes::types
