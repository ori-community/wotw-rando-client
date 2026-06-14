#pragma once
#include <Modloader/app/structs/ScopeN.h>
#include <Modloader/app/structs/ScopeN__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScopeN {
        inline app::ScopeN__Class** type_info() {
            static app::ScopeN__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScopeN__Class**)(modloader::win::memory::resolve_rva(0x04787038));
            }
            return cache;
        }
        inline app::ScopeN__Class* get_class() {
            return il2cpp::get_class<app::ScopeN__Class>(type_info(), "System.Linq.Expressions", "ScopeN");
        }
        inline app::ScopeN* create() {
            return il2cpp::create_object<app::ScopeN>(get_class());
        }
    } // namespace ScopeN
} // namespace app::classes::types
