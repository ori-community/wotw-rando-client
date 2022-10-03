#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NpcProjectItem {
        namespace {
            app::NpcProjectItem__Class* type_info_ref = nullptr;
        }
        app::NpcProjectItem__Class** type_info = &type_info_ref;
        inline app::NpcProjectItem__Class* get_class() {
            return il2cpp::get_class<app::NpcProjectItem__Class>(type_info, "", "NpcProjectItem");
        }
        inline app::NpcProjectItem* create() {
            return il2cpp::create_object<app::NpcProjectItem>(get_class());
        }
        inline app::NpcProjectItem__Array* create_array(int size) {
            return il2cpp::array_new<app::NpcProjectItem__Array>(get_class(), size);
        }
    } // namespace NpcProjectItem
} // namespace app::classes::types
