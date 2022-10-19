#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SNetSocket_t {
        inline app::SNetSocket_t__Class** type_info = (app::SNetSocket_t__Class**)(modloader::win::memory::resolve_rva(0x0473AF98));
        inline app::SNetSocket_t__Class* get_class() {
            return il2cpp::get_class<app::SNetSocket_t__Class>(type_info, "Steamworks", "SNetSocket_t");
        }
        inline app::SNetSocket_t* create() {
            return il2cpp::create_object<app::SNetSocket_t>(get_class());
        }
        inline app::SNetSocket_t__Boxed* box(app::SNetSocket_t value) {
            return il2cpp::box_value<app::SNetSocket_t__Boxed>(get_class(), value);
        }
    } // namespace SNetSocket_t
} // namespace app::classes::types
