#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboadData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaderboadData__Class** type_info;
        inline app::LeaderboadData__Class* get_class() {
            return il2cpp::get_class<app::LeaderboadData__Class>(type_info, "Moon.Race.Networking", "LeaderboadData");
        }
        inline app::LeaderboadData* create() {
            return il2cpp::create_object<app::LeaderboadData>(get_class());
        }
    } // namespace LeaderboadData
} // namespace app::classes::types
