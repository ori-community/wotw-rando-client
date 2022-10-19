#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XsdDateTimeFlags__Enum {
        inline app::XsdDateTimeFlags__Enum__Class** type_info = (app::XsdDateTimeFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x047098A8));
        inline app::XsdDateTimeFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::XsdDateTimeFlags__Enum__Class>(type_info, "System.Xml.Schema", "XsdDateTimeFlags");
        }
        inline app::XsdDateTimeFlags__Enum* create() {
            return il2cpp::create_object<app::XsdDateTimeFlags__Enum>(get_class());
        }
    } // namespace XsdDateTimeFlags__Enum
} // namespace app::classes::types
