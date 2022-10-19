#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeParse_MatchNumberDelegate {
        inline app::DateTimeParse_MatchNumberDelegate__Class** type_info = (app::DateTimeParse_MatchNumberDelegate__Class**)(modloader::win::memory::resolve_rva(0x04763B48));
        inline app::DateTimeParse_MatchNumberDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::DateTimeParse_MatchNumberDelegate__Class>(type_info, "System", "DateTimeParse", "MatchNumberDelegate");
        }
        inline app::DateTimeParse_MatchNumberDelegate* create() {
            return il2cpp::create_object<app::DateTimeParse_MatchNumberDelegate>(get_class());
        }
    } // namespace DateTimeParse_MatchNumberDelegate
} // namespace app::classes::types
