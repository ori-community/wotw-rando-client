#pragma once
#include <Modloader/app/structs/PathList.h>
#include <Modloader/app/structs/PathList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PathList {
        inline app::PathList__Class** type_info() {
            static app::PathList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PathList__Class**)(modloader::win::memory::resolve_rva(0x04720E20));
            }
            return cache;
        }
        inline app::PathList__Class* get_class() {
            return il2cpp::get_class<app::PathList__Class>(type_info(), "System.Net", "PathList");
        }
        inline app::PathList* create() {
            return il2cpp::create_object<app::PathList>(get_class());
        }
    } // namespace PathList
} // namespace app::classes::types
