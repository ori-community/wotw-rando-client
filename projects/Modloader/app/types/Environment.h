#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Environment__Class.h>
#include <Modloader/app/structs/Environment.h>

namespace app::classes::types {
    namespace Environment {
        inline app::Environment__Class** type_info = (app::Environment__Class**)(modloader::win::memory::resolve_rva(0x0478E510));
        inline app::Environment__Class* get_class() {
            return il2cpp::get_class<app::Environment__Class>(type_info, "System", "Environment");
        }
        inline app::Environment* create() {
            return il2cpp::create_object<app::Environment>(get_class());
        }
    } // namespace Environment
} // namespace app::classes::types
