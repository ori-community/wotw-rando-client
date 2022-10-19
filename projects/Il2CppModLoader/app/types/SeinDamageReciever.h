#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDamageReciever {
        inline app::SeinDamageReciever__Class** type_info = (app::SeinDamageReciever__Class**)(modloader::win::memory::resolve_rva(0x0470E738));
        inline app::SeinDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::SeinDamageReciever__Class>(type_info, "", "SeinDamageReciever");
        }
        inline app::SeinDamageReciever* create() {
            return il2cpp::create_object<app::SeinDamageReciever>(get_class());
        }
    } // namespace SeinDamageReciever
} // namespace app::classes::types
