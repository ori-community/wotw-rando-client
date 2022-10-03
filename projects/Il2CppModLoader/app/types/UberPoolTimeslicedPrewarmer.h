#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolTimeslicedPrewarmer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolTimeslicedPrewarmer__Class** type_info;
        inline app::UberPoolTimeslicedPrewarmer__Class* get_class() {
            return il2cpp::get_class<app::UberPoolTimeslicedPrewarmer__Class>(type_info, "", "UberPoolTimeslicedPrewarmer");
        }
        inline app::UberPoolTimeslicedPrewarmer* create() {
            return il2cpp::create_object<app::UberPoolTimeslicedPrewarmer>(get_class());
        }
    } // namespace UberPoolTimeslicedPrewarmer
} // namespace app::classes::types
