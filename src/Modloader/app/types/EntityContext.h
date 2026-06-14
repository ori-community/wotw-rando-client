#pragma once
#include <Modloader/app/structs/EntityContext.h>
#include <Modloader/app/structs/EntityContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityContext {
        inline app::EntityContext__Class** type_info() {
            static app::EntityContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityContext__Class**)(modloader::win::memory::resolve_rva(0x04722728));
            }
            return cache;
        }
        inline app::EntityContext__Class* get_class() {
            return il2cpp::get_class<app::EntityContext__Class>(type_info(), "", "EntityContext");
        }
        inline app::EntityContext* create() {
            return il2cpp::create_object<app::EntityContext>(get_class());
        }
    } // namespace EntityContext
} // namespace app::classes::types
