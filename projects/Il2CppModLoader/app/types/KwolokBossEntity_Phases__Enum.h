#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity_Phases__Enum {
        namespace {
            app::KwolokBossEntity_Phases__Enum__Class* type_info_ref = nullptr;
        }
        app::KwolokBossEntity_Phases__Enum__Class** type_info = &type_info_ref;
        inline app::KwolokBossEntity_Phases__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_Phases__Enum__Class>(type_info, "", "KwolokBossEntity", "Phases");
        }
        inline app::KwolokBossEntity_Phases__Enum* create() {
            return il2cpp::create_object<app::KwolokBossEntity_Phases__Enum>(get_class());
        }
        inline app::KwolokBossEntity_Phases__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::KwolokBossEntity_Phases__Enum__Array>(get_class(), size);
        }
        inline app::KwolokBossEntity_Phases__Enum__Array* create_array(const std::vector<app::KwolokBossEntity_Phases__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::KwolokBossEntity_Phases__Enum__Array>(get_class(), items);
        }
    } // namespace KwolokBossEntity_Phases__Enum
} // namespace app::classes::types
