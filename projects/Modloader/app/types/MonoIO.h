#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MonoIO__Class.h>
#include <Modloader/app/structs/MonoIO.h>

namespace app::classes::types {
    namespace MonoIO {
        inline app::MonoIO__Class** type_info = (app::MonoIO__Class**)(modloader::win::memory::resolve_rva(0x0476F4D8));
        inline app::MonoIO__Class* get_class() {
            return il2cpp::get_class<app::MonoIO__Class>(type_info, "System.IO", "MonoIO");
        }
        inline app::MonoIO* create() {
            return il2cpp::create_object<app::MonoIO>(get_class());
        }
    } // namespace MonoIO
} // namespace app::classes::types
