#pragma once
#include <Modloader/app/structs/GhostParsingHelper.h>
#include <Modloader/app/structs/GhostParsingHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostParsingHelper {
        inline app::GhostParsingHelper__Class** type_info() {
            static app::GhostParsingHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostParsingHelper__Class**)(modloader::win::memory::resolve_rva(0x0474A7C8));
            }
            return cache;
        }
        inline app::GhostParsingHelper__Class* get_class() {
            return il2cpp::get_class<app::GhostParsingHelper__Class>(type_info(), "", "GhostParsingHelper");
        }
        inline app::GhostParsingHelper* create() {
            return il2cpp::create_object<app::GhostParsingHelper>(get_class());
        }
    } // namespace GhostParsingHelper
} // namespace app::classes::types
