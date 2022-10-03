#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeParse_MatchNumberDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DateTimeParse_MatchNumberDelegate__Class** type_info;
        inline app::DateTimeParse_MatchNumberDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::DateTimeParse_MatchNumberDelegate__Class>(type_info, "System", "DateTimeParse", "MatchNumberDelegate");
        }
        inline app::DateTimeParse_MatchNumberDelegate* create() {
            return il2cpp::create_object<app::DateTimeParse_MatchNumberDelegate>(get_class());
        }
    } // namespace DateTimeParse_MatchNumberDelegate
} // namespace app::classes::types
