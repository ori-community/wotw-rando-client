#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaurEntity {
        inline app::BaurEntity__Class** type_info = (app::BaurEntity__Class**)(modloader::win::memory::resolve_rva(0x0474F8E8));
        inline app::BaurEntity__Class* get_class() {
            return il2cpp::get_class<app::BaurEntity__Class>(type_info, "", "BaurEntity");
        }
        inline app::BaurEntity* create() {
            return il2cpp::create_object<app::BaurEntity>(get_class());
        }
    } // namespace BaurEntity
} // namespace app::classes::types
