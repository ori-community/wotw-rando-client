#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveOptions__Enum {
        inline app::SaveOptions__Enum__Class** type_info = (app::SaveOptions__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472EFD8));
        inline app::SaveOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::SaveOptions__Enum__Class>(type_info, "System.Xml.Linq", "SaveOptions");
        }
        inline app::SaveOptions__Enum* create() {
            return il2cpp::create_object<app::SaveOptions__Enum>(get_class());
        }
    } // namespace SaveOptions__Enum
} // namespace app::classes::types
