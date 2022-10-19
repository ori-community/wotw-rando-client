#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SNetListenSocket_t {
        inline app::SNetListenSocket_t__Class** type_info = (app::SNetListenSocket_t__Class**)(modloader::win::memory::resolve_rva(0x04795B08));
        inline app::SNetListenSocket_t__Class* get_class() {
            return il2cpp::get_class<app::SNetListenSocket_t__Class>(type_info, "Steamworks", "SNetListenSocket_t");
        }
        inline app::SNetListenSocket_t* create() {
            return il2cpp::create_object<app::SNetListenSocket_t>(get_class());
        }
        inline app::SNetListenSocket_t__Boxed* box(app::SNetListenSocket_t value) {
            return il2cpp::box_value<app::SNetListenSocket_t__Boxed>(get_class(), value);
        }
    } // namespace SNetListenSocket_t
} // namespace app::classes::types
