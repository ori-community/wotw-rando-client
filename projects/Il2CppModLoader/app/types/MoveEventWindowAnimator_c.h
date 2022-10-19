#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoveEventWindowAnimator_c {
        inline app::MoveEventWindowAnimator_c__Class** type_info = (app::MoveEventWindowAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x047430B0));
        inline app::MoveEventWindowAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoveEventWindowAnimator_c__Class>(type_info, "Moon.Timeline", "MoveEventWindowAnimator", "<>c");
        }
        inline app::MoveEventWindowAnimator_c* create() {
            return il2cpp::create_object<app::MoveEventWindowAnimator_c>(get_class());
        }
    } // namespace MoveEventWindowAnimator_c
} // namespace app::classes::types
