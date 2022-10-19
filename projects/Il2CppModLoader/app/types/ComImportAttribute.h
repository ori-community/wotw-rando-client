#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComImportAttribute {
        inline app::ComImportAttribute__Class** type_info = (app::ComImportAttribute__Class**)(modloader::win::memory::resolve_rva(0x047203C0));
        inline app::ComImportAttribute__Class* get_class() {
            return il2cpp::get_class<app::ComImportAttribute__Class>(type_info, "System.Runtime.InteropServices", "ComImportAttribute");
        }
        inline app::ComImportAttribute* create() {
            return il2cpp::create_object<app::ComImportAttribute>(get_class());
        }
    } // namespace ComImportAttribute
} // namespace app::classes::types
