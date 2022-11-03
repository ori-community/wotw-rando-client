#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEvents {
        inline app::SeinEvents__Class** type_info = (app::SeinEvents__Class**)(modloader::win::memory::resolve_rva(0x047548F8));
        inline app::SeinEvents__Class* get_class() {
            return il2cpp::get_class<app::SeinEvents__Class>(type_info, "Game", "SeinEvents");
        }
        inline app::SeinEvents* create() {
            return il2cpp::create_object<app::SeinEvents>(get_class());
        }
    } // namespace SeinEvents
} // namespace app::classes::types
