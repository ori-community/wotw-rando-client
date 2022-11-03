#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuilderScreen {
        inline app::BuilderScreen__Class** type_info = (app::BuilderScreen__Class**)(modloader::win::memory::resolve_rva(0x04704B28));
        inline app::BuilderScreen__Class* get_class() {
            return il2cpp::get_class<app::BuilderScreen__Class>(type_info, "", "BuilderScreen");
        }
        inline app::BuilderScreen* create() {
            return il2cpp::create_object<app::BuilderScreen>(get_class());
        }
    } // namespace BuilderScreen
} // namespace app::classes::types
