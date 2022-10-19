#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionPunchModifier {
        inline app::InteractionPunchModifier__Class** type_info = (app::InteractionPunchModifier__Class**)(modloader::win::memory::resolve_rva(0x04772058));
        inline app::InteractionPunchModifier__Class* get_class() {
            return il2cpp::get_class<app::InteractionPunchModifier__Class>(type_info, "", "InteractionPunchModifier");
        }
        inline app::InteractionPunchModifier* create() {
            return il2cpp::create_object<app::InteractionPunchModifier>(get_class());
        }
    } // namespace InteractionPunchModifier
} // namespace app::classes::types
