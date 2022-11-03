#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellIconsCollection_Icons__Array {
        namespace {
            inline app::SpellIconsCollection_Icons__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpellIconsCollection_Icons__Array__Class** type_info = &type_info_ref;
        inline app::SpellIconsCollection_Icons__Array__Class* get_class() {
            return il2cpp::get_class<app::SpellIconsCollection_Icons__Array__Class>(type_info, "", "SpellIconsCollection+Icons[]");
        }
        inline app::SpellIconsCollection_Icons__Array* create() {
            return il2cpp::create_object<app::SpellIconsCollection_Icons__Array>(get_class());
        }
    } // namespace SpellIconsCollection_Icons__Array
} // namespace app::classes::types
