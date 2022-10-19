#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CSteamID {
        inline app::CSteamID__Class** type_info = (app::CSteamID__Class**)(modloader::win::memory::resolve_rva(0x04746E48));
        inline app::CSteamID__Class* get_class() {
            return il2cpp::get_class<app::CSteamID__Class>(type_info, "Steamworks", "CSteamID");
        }
        inline app::CSteamID* create() {
            return il2cpp::create_object<app::CSteamID>(get_class());
        }
        inline app::CSteamID__Boxed* box(app::CSteamID value) {
            return il2cpp::box_value<app::CSteamID__Boxed>(get_class(), value);
        }
        inline app::CSteamID__Array* create_array(int size) {
            return il2cpp::array_new<app::CSteamID__Array>(get_class(), size);
        }
        inline app::CSteamID__Array* create_array(const std::vector<app::CSteamID>& items) {
            return il2cpp::array_new<app::CSteamID__Array>(get_class(), items);
        }
    } // namespace CSteamID
} // namespace app::classes::types
