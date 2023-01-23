#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinDashNew_c__Class.h>
#include <Modloader/app/structs/SeinDashNew_c.h>

namespace app::classes::types {
    namespace SeinDashNew_c {
        inline app::SeinDashNew_c__Class** type_info = (app::SeinDashNew_c__Class**)(modloader::win::memory::resolve_rva(0x0470DE48));
        inline app::SeinDashNew_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDashNew_c__Class>(type_info, "", "SeinDashNew", "<>c");
        }
        inline app::SeinDashNew_c* create() {
            return il2cpp::create_object<app::SeinDashNew_c>(get_class());
        }
    } // namespace SeinDashNew_c
} // namespace app::classes::types
