#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonDriver__Class.h>
#include <Modloader/app/structs/MoonDriver.h>

namespace app::classes::types {
    namespace MoonDriver {
        inline app::MoonDriver__Class** type_info = (app::MoonDriver__Class**)(modloader::win::memory::resolve_rva(0x0471F8D8));
        inline app::MoonDriver__Class* get_class() {
            return il2cpp::get_class<app::MoonDriver__Class>(type_info, "Moon", "MoonDriver");
        }
        inline app::MoonDriver* create() {
            return il2cpp::create_object<app::MoonDriver>(get_class());
        }
    } // namespace MoonDriver
} // namespace app::classes::types
