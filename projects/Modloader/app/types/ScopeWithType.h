#pragma once
#include <Modloader/app/structs/ScopeWithType.h>
#include <Modloader/app/structs/ScopeWithType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScopeWithType {
        inline app::ScopeWithType__Class** type_info() {
            static app::ScopeWithType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScopeWithType__Class**)(modloader::win::memory::resolve_rva(0x0477F758));
            }
            return cache;
        }
        inline app::ScopeWithType__Class* get_class() {
            return il2cpp::get_class<app::ScopeWithType__Class>(type_info(), "System.Linq.Expressions", "ScopeWithType");
        }
        inline app::ScopeWithType* create() {
            return il2cpp::create_object<app::ScopeWithType>(get_class());
        }
    } // namespace ScopeWithType
} // namespace app::classes::types
