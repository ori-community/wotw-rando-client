#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellUIItem {
        namespace {
            inline app::SpellUIItem__Class* type_info_ref = nullptr;
        }
        inline app::SpellUIItem__Class** type_info = &type_info_ref;
        inline app::SpellUIItem__Class* get_class() {
            return il2cpp::get_class<app::SpellUIItem__Class>(type_info, "", "SpellUIItem");
        }
        inline app::SpellUIItem* create() {
            return il2cpp::create_object<app::SpellUIItem>(get_class());
        }
    } // namespace SpellUIItem
} // namespace app::classes::types
