#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Path__Class.h>
#include <Modloader/app/structs/Path.h>

namespace app::classes::types {
    namespace Path {
        inline app::Path__Class** type_info = (app::Path__Class**)(modloader::win::memory::resolve_rva(0x04718150));
        inline app::Path__Class* get_class() {
            return il2cpp::get_class<app::Path__Class>(type_info, "System.IO", "Path");
        }
        inline app::Path* create() {
            return il2cpp::create_object<app::Path>(get_class());
        }
    } // namespace Path
} // namespace app::classes::types
