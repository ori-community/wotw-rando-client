#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellShardCompatibilityCollection {
        namespace {
            inline app::SpellShardCompatibilityCollection__Class* type_info_ref = nullptr;
        }
        inline app::SpellShardCompatibilityCollection__Class** type_info = &type_info_ref;
        inline app::SpellShardCompatibilityCollection__Class* get_class() {
            return il2cpp::get_class<app::SpellShardCompatibilityCollection__Class>(type_info, "", "SpellShardCompatibilityCollection");
        }
        inline app::SpellShardCompatibilityCollection* create() {
            return il2cpp::create_object<app::SpellShardCompatibilityCollection>(get_class());
        }
    } // namespace SpellShardCompatibilityCollection
} // namespace app::classes::types
