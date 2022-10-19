#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightDarkeningErasingComparer {
        inline app::LightDarkeningErasingComparer__Class** type_info = (app::LightDarkeningErasingComparer__Class**)(modloader::win::memory::resolve_rva(0x04777AA8));
        inline app::LightDarkeningErasingComparer__Class* get_class() {
            return il2cpp::get_class<app::LightDarkeningErasingComparer__Class>(type_info, "", "LightDarkeningErasingComparer");
        }
        inline app::LightDarkeningErasingComparer* create() {
            return il2cpp::create_object<app::LightDarkeningErasingComparer>(get_class());
        }
    } // namespace LightDarkeningErasingComparer
} // namespace app::classes::types
