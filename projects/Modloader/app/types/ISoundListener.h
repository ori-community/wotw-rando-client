#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISoundListener__Class.h>

namespace app::classes::types {
    namespace ISoundListener {
        inline app::ISoundListener__Class** type_info = (app::ISoundListener__Class**)(modloader::win::memory::resolve_rva(0x047727F8));
        inline app::ISoundListener__Class* get_class() {
            return il2cpp::get_class<app::ISoundListener__Class>(type_info, "Moon.Wwise", "ISoundListener");
        }
    } // namespace ISoundListener
} // namespace app::classes::types
