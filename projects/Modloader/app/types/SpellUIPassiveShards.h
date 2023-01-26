#pragma once
#include <Modloader/app/structs/SpellUIPassiveShards.h>
#include <Modloader/app/structs/SpellUIPassiveShards__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUIPassiveShards {
        inline app::SpellUIPassiveShards__Class** type_info() {
            static app::SpellUIPassiveShards__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellUIPassiveShards__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellUIPassiveShards__Class* get_class() {
            return il2cpp::get_class<app::SpellUIPassiveShards__Class>(type_info(), "", "SpellUIPassiveShards");
        }
        inline app::SpellUIPassiveShards* create() {
            return il2cpp::create_object<app::SpellUIPassiveShards>(get_class());
        }
    } // namespace SpellUIPassiveShards
} // namespace app::classes::types
