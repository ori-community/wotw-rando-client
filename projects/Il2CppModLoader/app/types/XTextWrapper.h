#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XTextWrapper {
        inline app::XTextWrapper__Class** type_info = (app::XTextWrapper__Class**)(modloader::win::memory::resolve_rva(0x0473BA20));
        inline app::XTextWrapper__Class* get_class() {
            return il2cpp::get_class<app::XTextWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XTextWrapper");
        }
        inline app::XTextWrapper* create() {
            return il2cpp::create_object<app::XTextWrapper>(get_class());
        }
    } // namespace XTextWrapper
} // namespace app::classes::types
