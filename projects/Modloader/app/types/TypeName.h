#pragma once
#include <Modloader/app/structs/TypeName.h>
#include <Modloader/app/structs/TypeName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeName {
        inline app::TypeName__Class** type_info() {
            static app::TypeName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeName__Class**)(modloader::win::memory::resolve_rva(0x0478E7C0));
            }
            return cache;
        }
        inline app::TypeName__Class* get_class() {
            return il2cpp::get_class<app::TypeName__Class>(type_info(), "System", "TypeName");
        }
    } // namespace TypeName
} // namespace app::classes::types
