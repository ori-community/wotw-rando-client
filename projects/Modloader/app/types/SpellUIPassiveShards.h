#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellUIPassiveShards {
        namespace {
            inline app::SpellUIPassiveShards__Class* type_info_ref = nullptr;
        }
        inline app::SpellUIPassiveShards__Class** type_info = &type_info_ref;
        inline app::SpellUIPassiveShards__Class* get_class() {
            return il2cpp::get_class<app::SpellUIPassiveShards__Class>(type_info, "", "SpellUIPassiveShards");
        }
        inline app::SpellUIPassiveShards* create() {
            return il2cpp::create_object<app::SpellUIPassiveShards>(get_class());
        }
    } // namespace SpellUIPassiveShards
} // namespace app::classes::types
