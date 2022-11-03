#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoremasterScreen {
        inline app::LoremasterScreen__Class** type_info = (app::LoremasterScreen__Class**)(modloader::win::memory::resolve_rva(0x04747620));
        inline app::LoremasterScreen__Class* get_class() {
            return il2cpp::get_class<app::LoremasterScreen__Class>(type_info, "", "LoremasterScreen");
        }
        inline app::LoremasterScreen* create() {
            return il2cpp::create_object<app::LoremasterScreen>(get_class());
        }
    } // namespace LoremasterScreen
} // namespace app::classes::types
