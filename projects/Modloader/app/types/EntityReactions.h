#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityReactions {
        namespace {
            inline app::EntityReactions__Class* type_info_ref = nullptr;
        }
        inline app::EntityReactions__Class** type_info = &type_info_ref;
        inline app::EntityReactions__Class* get_class() {
            return il2cpp::get_class<app::EntityReactions__Class>(type_info, "", "EntityReactions");
        }
        inline app::EntityReactions* create() {
            return il2cpp::create_object<app::EntityReactions>(get_class());
        }
    } // namespace EntityReactions
} // namespace app::classes::types
