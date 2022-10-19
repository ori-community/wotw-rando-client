#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NickDeathReaction_c {
        inline app::NickDeathReaction_c__Class** type_info = (app::NickDeathReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04782860));
        inline app::NickDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NickDeathReaction_c__Class>(type_info, "", "NickDeathReaction", "<>c");
        }
        inline app::NickDeathReaction_c* create() {
            return il2cpp::create_object<app::NickDeathReaction_c>(get_class());
        }
    } // namespace NickDeathReaction_c
} // namespace app::classes::types
