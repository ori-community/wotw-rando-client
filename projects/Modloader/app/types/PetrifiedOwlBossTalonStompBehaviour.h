#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTalonStompBehaviour {
        inline app::PetrifiedOwlBossTalonStompBehaviour__Class** type_info = (app::PetrifiedOwlBossTalonStompBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04764AF0));
        inline app::PetrifiedOwlBossTalonStompBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossTalonStompBehaviour__Class>(type_info, "", "PetrifiedOwlBossTalonStompBehaviour");
        }
        inline app::PetrifiedOwlBossTalonStompBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTalonStompBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossTalonStompBehaviour
} // namespace app::classes::types
