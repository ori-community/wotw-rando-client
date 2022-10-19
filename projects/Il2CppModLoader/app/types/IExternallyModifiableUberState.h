#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IExternallyModifiableUberState {
        inline app::IExternallyModifiableUberState__Class** type_info = (app::IExternallyModifiableUberState__Class**)(modloader::win::memory::resolve_rva(0x04730698));
        inline app::IExternallyModifiableUberState__Class* get_class() {
            return il2cpp::get_class<app::IExternallyModifiableUberState__Class>(type_info, "Moon", "IExternallyModifiableUberState");
        }
        inline app::IExternallyModifiableUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::IExternallyModifiableUberState__Array>(get_class(), size);
        }
        inline app::IExternallyModifiableUberState__Array* create_array(const std::vector<app::IExternallyModifiableUberState*>& items) {
            return il2cpp::array_new<app::IExternallyModifiableUberState__Array>(get_class(), items);
        }
    } // namespace IExternallyModifiableUberState
} // namespace app::classes::types
