#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BoolDebugMenuItem__Class.h>
#include <Modloader/app/structs/BoolDebugMenuItem.h>

namespace app::classes::types {
    namespace BoolDebugMenuItem {
        inline app::BoolDebugMenuItem__Class** type_info = (app::BoolDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04795B10));
        inline app::BoolDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::BoolDebugMenuItem__Class>(type_info, "", "BoolDebugMenuItem");
        }
        inline app::BoolDebugMenuItem* create() {
            return il2cpp::create_object<app::BoolDebugMenuItem>(get_class());
        }
    } // namespace BoolDebugMenuItem
} // namespace app::classes::types
