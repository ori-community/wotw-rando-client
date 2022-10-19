#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinRide {
        inline app::SeinRide__Class** type_info = (app::SeinRide__Class**)(modloader::win::memory::resolve_rva(0x04772FC8));
        inline app::SeinRide__Class* get_class() {
            return il2cpp::get_class<app::SeinRide__Class>(type_info, "", "SeinRide");
        }
        inline app::SeinRide* create() {
            return il2cpp::create_object<app::SeinRide>(get_class());
        }
    } // namespace SeinRide
} // namespace app::classes::types
