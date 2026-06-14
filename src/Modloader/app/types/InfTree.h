#pragma once
#include <Modloader/app/structs/InfTree.h>
#include <Modloader/app/structs/InfTree__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InfTree {
        inline app::InfTree__Class** type_info() {
            static app::InfTree__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InfTree__Class**)(modloader::win::memory::resolve_rva(0x047586D0));
            }
            return cache;
        }
        inline app::InfTree__Class* get_class() {
            return il2cpp::get_class<app::InfTree__Class>(type_info(), "Ionic.Zlib", "InfTree");
        }
        inline app::InfTree* create() {
            return il2cpp::create_object<app::InfTree>(get_class());
        }
    } // namespace InfTree
} // namespace app::classes::types
