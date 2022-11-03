#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParameterizedThreadStart {
        inline app::ParameterizedThreadStart__Class** type_info = (app::ParameterizedThreadStart__Class**)(modloader::win::memory::resolve_rva(0x04731C98));
        inline app::ParameterizedThreadStart__Class* get_class() {
            return il2cpp::get_class<app::ParameterizedThreadStart__Class>(type_info, "System.Threading", "ParameterizedThreadStart");
        }
        inline app::ParameterizedThreadStart* create() {
            return il2cpp::create_object<app::ParameterizedThreadStart>(get_class());
        }
    } // namespace ParameterizedThreadStart
} // namespace app::classes::types
