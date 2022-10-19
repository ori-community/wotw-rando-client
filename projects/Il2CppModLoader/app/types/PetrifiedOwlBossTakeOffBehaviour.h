#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTakeOffBehaviour {
        inline app::PetrifiedOwlBossTakeOffBehaviour__Class** type_info = (app::PetrifiedOwlBossTakeOffBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04779D10));
        inline app::PetrifiedOwlBossTakeOffBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossTakeOffBehaviour__Class>(type_info, "", "PetrifiedOwlBossTakeOffBehaviour");
        }
        inline app::PetrifiedOwlBossTakeOffBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTakeOffBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossTakeOffBehaviour
} // namespace app::classes::types
