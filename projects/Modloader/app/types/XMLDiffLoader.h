#pragma once
#include <Modloader/app/structs/XMLDiffLoader.h>
#include <Modloader/app/structs/XMLDiffLoader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XMLDiffLoader {
        inline app::XMLDiffLoader__Class** type_info() {
            static app::XMLDiffLoader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XMLDiffLoader__Class**)(modloader::win::memory::resolve_rva(0x04750E50));
            }
            return cache;
        }
        inline app::XMLDiffLoader__Class* get_class() {
            return il2cpp::get_class<app::XMLDiffLoader__Class>(type_info(), "System.Data", "XMLDiffLoader");
        }
        inline app::XMLDiffLoader* create() {
            return il2cpp::create_object<app::XMLDiffLoader>(get_class());
        }
    } // namespace XMLDiffLoader
} // namespace app::classes::types
