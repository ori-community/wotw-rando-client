#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StaticTree__Class.h>
#include <Modloader/app/structs/StaticTree.h>

namespace app::classes::types {
    namespace StaticTree {
        inline app::StaticTree__Class** type_info = (app::StaticTree__Class**)(modloader::win::memory::resolve_rva(0x04776748));
        inline app::StaticTree__Class* get_class() {
            return il2cpp::get_class<app::StaticTree__Class>(type_info, "Ionic.Zlib", "StaticTree");
        }
        inline app::StaticTree* create() {
            return il2cpp::create_object<app::StaticTree>(get_class());
        }
    } // namespace StaticTree
} // namespace app::classes::types
