#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AutoFillOnCreationAttribute {
        inline app::AutoFillOnCreationAttribute__Class** type_info = (app::AutoFillOnCreationAttribute__Class**)(modloader::win::memory::resolve_rva(0x04739EB8));
        inline app::AutoFillOnCreationAttribute__Class* get_class() {
            return il2cpp::get_class<app::AutoFillOnCreationAttribute__Class>(type_info, "Moon.Timeline", "AutoFillOnCreationAttribute");
        }
        inline app::AutoFillOnCreationAttribute* create() {
            return il2cpp::create_object<app::AutoFillOnCreationAttribute>(get_class());
        }
    } // namespace AutoFillOnCreationAttribute
} // namespace app::classes::types
