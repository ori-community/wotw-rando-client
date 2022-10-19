#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetupStateModifier {
        inline app::SetupStateModifier__Class** type_info = (app::SetupStateModifier__Class**)(modloader::win::memory::resolve_rva(0x04785A50));
        inline app::SetupStateModifier__Class* get_class() {
            return il2cpp::get_class<app::SetupStateModifier__Class>(type_info, "", "SetupStateModifier");
        }
        inline app::SetupStateModifier* create() {
            return il2cpp::create_object<app::SetupStateModifier>(get_class());
        }
        inline app::SetupStateModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::SetupStateModifier__Array>(get_class(), size);
        }
        inline app::SetupStateModifier__Array* create_array(const std::vector<app::SetupStateModifier*>& items) {
            return il2cpp::array_new<app::SetupStateModifier__Array>(get_class(), items);
        }
    } // namespace SetupStateModifier
} // namespace app::classes::types
