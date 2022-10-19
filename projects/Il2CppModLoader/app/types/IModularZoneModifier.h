#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IModularZoneModifier {
        inline app::IModularZoneModifier__Class** type_info = (app::IModularZoneModifier__Class**)(modloader::win::memory::resolve_rva(0x04720660));
        inline app::IModularZoneModifier__Class* get_class() {
            return il2cpp::get_class<app::IModularZoneModifier__Class>(type_info, "", "IModularZoneModifier");
        }
        inline app::IModularZoneModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::IModularZoneModifier__Array>(get_class(), size);
        }
        inline app::IModularZoneModifier__Array* create_array(const std::vector<app::IModularZoneModifier*>& items) {
            return il2cpp::array_new<app::IModularZoneModifier__Array>(get_class(), items);
        }
    } // namespace IModularZoneModifier
} // namespace app::classes::types
