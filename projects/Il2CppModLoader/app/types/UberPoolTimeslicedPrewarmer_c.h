#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolTimeslicedPrewarmer_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolTimeslicedPrewarmer_c__Class** type_info;
        inline app::UberPoolTimeslicedPrewarmer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolTimeslicedPrewarmer_c__Class>(type_info, "", "UberPoolTimeslicedPrewarmer", "<>c");
        }
        inline app::UberPoolTimeslicedPrewarmer_c* create() {
            return il2cpp::create_object<app::UberPoolTimeslicedPrewarmer_c>(get_class());
        }
    } // namespace UberPoolTimeslicedPrewarmer_c
} // namespace app::classes::types
