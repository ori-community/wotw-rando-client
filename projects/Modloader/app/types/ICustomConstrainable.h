#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ICustomConstrainable__Class.h>

namespace app::classes::types {
    namespace ICustomConstrainable {
        inline app::ICustomConstrainable__Class** type_info = (app::ICustomConstrainable__Class**)(modloader::win::memory::resolve_rva(0x047135D0));
        inline app::ICustomConstrainable__Class* get_class() {
            return il2cpp::get_class<app::ICustomConstrainable__Class>(type_info, "Moon.Timeline", "ICustomConstrainable");
        }
    } // namespace ICustomConstrainable
} // namespace app::classes::types
