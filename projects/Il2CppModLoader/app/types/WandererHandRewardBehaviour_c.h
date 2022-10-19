#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WandererHandRewardBehaviour_c {
        inline app::WandererHandRewardBehaviour_c__Class** type_info = (app::WandererHandRewardBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0474C7F0));
        inline app::WandererHandRewardBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WandererHandRewardBehaviour_c__Class>(type_info, "Moon", "WandererHandRewardBehaviour", "<>c");
        }
        inline app::WandererHandRewardBehaviour_c* create() {
            return il2cpp::create_object<app::WandererHandRewardBehaviour_c>(get_class());
        }
    } // namespace WandererHandRewardBehaviour_c
} // namespace app::classes::types
