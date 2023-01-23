#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinCinematic_c__Class.h>
#include <Modloader/app/structs/SeinCinematic_c.h>

namespace app::classes::types {
    namespace SeinCinematic_c {
        inline app::SeinCinematic_c__Class** type_info = (app::SeinCinematic_c__Class**)(modloader::win::memory::resolve_rva(0x04794970));
        inline app::SeinCinematic_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinCinematic_c__Class>(type_info, "", "SeinCinematic", "<>c");
        }
        inline app::SeinCinematic_c* create() {
            return il2cpp::create_object<app::SeinCinematic_c>(get_class());
        }
    } // namespace SeinCinematic_c
} // namespace app::classes::types
