#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PathList_PathListComparer__Class.h>
#include <Modloader/app/structs/PathList_PathListComparer.h>

namespace app::classes::types {
    namespace PathList_PathListComparer {
        inline app::PathList_PathListComparer__Class** type_info = (app::PathList_PathListComparer__Class**)(modloader::win::memory::resolve_rva(0x047638E0));
        inline app::PathList_PathListComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::PathList_PathListComparer__Class>(type_info, "System.Net", "PathList", "PathListComparer");
        }
        inline app::PathList_PathListComparer* create() {
            return il2cpp::create_object<app::PathList_PathListComparer>(get_class());
        }
    } // namespace PathList_PathListComparer
} // namespace app::classes::types
