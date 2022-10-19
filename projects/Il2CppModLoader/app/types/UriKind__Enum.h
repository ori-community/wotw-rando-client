#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UriKind__Enum {
        inline app::UriKind__Enum__Class** type_info = (app::UriKind__Enum__Class**)(modloader::win::memory::resolve_rva(0x04712008));
        inline app::UriKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriKind__Enum__Class>(type_info, "System", "UriKind");
        }
        inline app::UriKind__Enum* create() {
            return il2cpp::create_object<app::UriKind__Enum>(get_class());
        }
    } // namespace UriKind__Enum
} // namespace app::classes::types
