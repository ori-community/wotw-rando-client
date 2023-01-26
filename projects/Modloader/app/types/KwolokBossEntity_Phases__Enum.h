#pragma once
#include <Modloader/app/structs/KwolokBossEntity_Phases__Enum.h>
#include <Modloader/app/structs/KwolokBossEntity_Phases__Enum__Array.h>
#include <Modloader/app/structs/KwolokBossEntity_Phases__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity_Phases__Enum {
        inline app::KwolokBossEntity_Phases__Enum__Class** type_info() {
            static app::KwolokBossEntity_Phases__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossEntity_Phases__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossEntity_Phases__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_Phases__Enum__Class>(type_info(), "", "KwolokBossEntity", "Phases");
        }
        inline app::KwolokBossEntity_Phases__Enum* create() {
            return il2cpp::create_object<app::KwolokBossEntity_Phases__Enum>(get_class());
        }
        inline app::KwolokBossEntity_Phases__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::KwolokBossEntity_Phases__Enum__Array>(get_class(), size);
        }
        inline app::KwolokBossEntity_Phases__Enum__Array* create_array(const std::vector<app::KwolokBossEntity_Phases__Enum*>& items) {
            return il2cpp::array_new<app::KwolokBossEntity_Phases__Enum__Array>(get_class(), items);
        }
    } // namespace KwolokBossEntity_Phases__Enum
} // namespace app::classes::types
