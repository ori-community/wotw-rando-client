#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NaruLookUpZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NaruLookUpZone__Class** type_info;
        inline app::NaruLookUpZone__Class* get_class() {
            return il2cpp::get_class<app::NaruLookUpZone__Class>(type_info, "", "NaruLookUpZone");
        }
        inline app::NaruLookUpZone* create() {
            return il2cpp::create_object<app::NaruLookUpZone>(get_class());
        }
        inline app::NaruLookUpZone__Array* create_array(int size) {
            return il2cpp::array_new<app::NaruLookUpZone__Array>(get_class(), size);
        }
    } // namespace NaruLookUpZone
} // namespace app::classes::types
