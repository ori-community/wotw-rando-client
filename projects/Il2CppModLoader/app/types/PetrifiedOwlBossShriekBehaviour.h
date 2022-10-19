#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossShriekBehaviour {
        inline app::PetrifiedOwlBossShriekBehaviour__Class** type_info = (app::PetrifiedOwlBossShriekBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04752A68));
        inline app::PetrifiedOwlBossShriekBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossShriekBehaviour__Class>(type_info, "", "PetrifiedOwlBossShriekBehaviour");
        }
        inline app::PetrifiedOwlBossShriekBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossShriekBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossShriekBehaviour
} // namespace app::classes::types
