#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GlobalAlphaCutoffMenuItem__Class.h>
#include <Modloader/app/structs/GlobalAlphaCutoffMenuItem.h>

namespace app::classes::types {
    namespace GlobalAlphaCutoffMenuItem {
        inline app::GlobalAlphaCutoffMenuItem__Class** type_info = (app::GlobalAlphaCutoffMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0471D330));
        inline app::GlobalAlphaCutoffMenuItem__Class* get_class() {
            return il2cpp::get_class<app::GlobalAlphaCutoffMenuItem__Class>(type_info, "", "GlobalAlphaCutoffMenuItem");
        }
        inline app::GlobalAlphaCutoffMenuItem* create() {
            return il2cpp::create_object<app::GlobalAlphaCutoffMenuItem>(get_class());
        }
    } // namespace GlobalAlphaCutoffMenuItem
} // namespace app::classes::types
