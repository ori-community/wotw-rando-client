#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossEntity_Phases__Enum__Class.h>
#include <Modloader/app/structs/KwolokBossEntity_Phases__Enum.h>
#include <Modloader/app/structs/KwolokBossEntity_Phases__Enum__Array.h>

namespace app::classes::types {
    namespace KwolokBossEntity_Phases__Enum {
        namespace {
            inline app::KwolokBossEntity_Phases__Enum__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossEntity_Phases__Enum__Class** type_info = &type_info_ref;
        inline app::KwolokBossEntity_Phases__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_Phases__Enum__Class>(type_info, "", "KwolokBossEntity", "Phases");
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
