#pragma once
#include <Modloader/app/structs/PathList_PathListComparer.h>
#include <Modloader/app/structs/PathList_PathListComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PathList_PathListComparer {
        inline app::PathList_PathListComparer__Class** type_info() {
            static app::PathList_PathListComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PathList_PathListComparer__Class**)(modloader::win::memory::resolve_rva(0x047638E0));
            }
            return cache;
        }
        inline app::PathList_PathListComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::PathList_PathListComparer__Class>(type_info(), "System.Net", "PathList", "PathListComparer");
        }
        inline app::PathList_PathListComparer* create() {
            return il2cpp::create_object<app::PathList_PathListComparer>(get_class());
        }
    } // namespace PathList_PathListComparer
} // namespace app::classes::types
