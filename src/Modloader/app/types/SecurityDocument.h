#pragma once
#include <Modloader/app/structs/SecurityDocument.h>
#include <Modloader/app/structs/SecurityDocument__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityDocument {
        inline app::SecurityDocument__Class** type_info() {
            static app::SecurityDocument__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SecurityDocument__Class**)(modloader::win::memory::resolve_rva(0x047636E0));
            }
            return cache;
        }
        inline app::SecurityDocument__Class* get_class() {
            return il2cpp::get_class<app::SecurityDocument__Class>(type_info(), "System.Security", "SecurityDocument");
        }
        inline app::SecurityDocument* create() {
            return il2cpp::create_object<app::SecurityDocument>(get_class());
        }
    } // namespace SecurityDocument
} // namespace app::classes::types
