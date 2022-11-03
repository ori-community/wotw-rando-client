#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OpCodeNames {
        inline app::OpCodeNames__Class** type_info = (app::OpCodeNames__Class**)(modloader::win::memory::resolve_rva(0x04766728));
        inline app::OpCodeNames__Class* get_class() {
            return il2cpp::get_class<app::OpCodeNames__Class>(type_info, "System.Reflection.Emit", "OpCodeNames");
        }
        inline app::OpCodeNames* create() {
            return il2cpp::create_object<app::OpCodeNames>(get_class());
        }
    } // namespace OpCodeNames
} // namespace app::classes::types
