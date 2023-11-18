#pragma once
#include <Modloader/app/structs/BuilderNPC.h>
#include <Modloader/app/structs/BuilderNPC__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderNPC {
        inline app::BuilderNPC__Class** type_info() {
            static app::BuilderNPC__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuilderNPC__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuilderNPC__Class* get_class() {
            return il2cpp::get_class<app::BuilderNPC__Class>(type_info(), "", "BuilderNPC");
        }
        inline app::BuilderNPC* create() {
            return il2cpp::create_object<app::BuilderNPC>(get_class());
        }
    } // namespace BuilderNPC
} // namespace app::classes::types
