#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Switch__Class.h>
#include <Modloader/app/structs/Switch.h>

namespace app::classes::types {
    namespace Switch {
        inline app::Switch__Class** type_info = (app::Switch__Class**)(modloader::win::memory::resolve_rva(0x047395A0));
        inline app::Switch__Class* get_class() {
            return il2cpp::get_class<app::Switch__Class>(type_info, "System.Diagnostics", "Switch");
        }
        inline app::Switch* create() {
            return il2cpp::create_object<app::Switch>(get_class());
        }
    } // namespace Switch
} // namespace app::classes::types
