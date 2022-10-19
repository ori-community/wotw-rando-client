#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriggerByString {
        inline app::TriggerByString__Class** type_info = (app::TriggerByString__Class**)(modloader::win::memory::resolve_rva(0x04788B60));
        inline app::TriggerByString__Class* get_class() {
            return il2cpp::get_class<app::TriggerByString__Class>(type_info, "", "TriggerByString");
        }
        inline app::TriggerByString* create() {
            return il2cpp::create_object<app::TriggerByString>(get_class());
        }
    } // namespace TriggerByString
} // namespace app::classes::types
