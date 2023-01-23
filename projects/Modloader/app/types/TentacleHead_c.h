#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TentacleHead_c__Class.h>
#include <Modloader/app/structs/TentacleHead_c.h>

namespace app::classes::types {
    namespace TentacleHead_c {
        inline app::TentacleHead_c__Class** type_info = (app::TentacleHead_c__Class**)(modloader::win::memory::resolve_rva(0x04786D40));
        inline app::TentacleHead_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleHead_c__Class>(type_info, "", "TentacleHead", "<>c");
        }
        inline app::TentacleHead_c* create() {
            return il2cpp::create_object<app::TentacleHead_c>(get_class());
        }
    } // namespace TentacleHead_c
} // namespace app::classes::types
