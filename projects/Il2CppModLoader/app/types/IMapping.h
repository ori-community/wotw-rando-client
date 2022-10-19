#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMapping {
        inline app::IMapping__Class** type_info = (app::IMapping__Class**)(modloader::win::memory::resolve_rva(0x047350D0));
        inline app::IMapping__Class* get_class() {
            return il2cpp::get_class<app::IMapping__Class>(type_info, "", "IMapping");
        }
    } // namespace IMapping
} // namespace app::classes::types
