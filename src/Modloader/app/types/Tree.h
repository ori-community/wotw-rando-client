#pragma once
#include <Modloader/app/structs/Tree.h>
#include <Modloader/app/structs/Tree__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tree {
        inline app::Tree__Class** type_info() {
            static app::Tree__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Tree__Class**)(modloader::win::memory::resolve_rva(0x04779398));
            }
            return cache;
        }
        inline app::Tree__Class* get_class() {
            return il2cpp::get_class<app::Tree__Class>(type_info(), "Ionic.Zlib", "Tree");
        }
        inline app::Tree* create() {
            return il2cpp::create_object<app::Tree>(get_class());
        }
    } // namespace Tree
} // namespace app::classes::types
