#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FieldOffsetAttribute {
        inline app::FieldOffsetAttribute__Class** type_info = (app::FieldOffsetAttribute__Class**)(modloader::win::memory::resolve_rva(0x04709DD8));
        inline app::FieldOffsetAttribute__Class* get_class() {
            return il2cpp::get_class<app::FieldOffsetAttribute__Class>(type_info, "System.Runtime.InteropServices", "FieldOffsetAttribute");
        }
        inline app::FieldOffsetAttribute* create() {
            return il2cpp::create_object<app::FieldOffsetAttribute>(get_class());
        }
    } // namespace FieldOffsetAttribute
} // namespace app::classes::types
