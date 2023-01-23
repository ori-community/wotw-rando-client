#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinStomp_c__Class.h>
#include <Modloader/app/structs/SeinStomp_c.h>

namespace app::classes::types {
    namespace SeinStomp_c {
        inline app::SeinStomp_c__Class** type_info = (app::SeinStomp_c__Class**)(modloader::win::memory::resolve_rva(0x0470E168));
        inline app::SeinStomp_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinStomp_c__Class>(type_info, "", "SeinStomp", "<>c");
        }
        inline app::SeinStomp_c* create() {
            return il2cpp::create_object<app::SeinStomp_c>(get_class());
        }
    } // namespace SeinStomp_c
} // namespace app::classes::types
