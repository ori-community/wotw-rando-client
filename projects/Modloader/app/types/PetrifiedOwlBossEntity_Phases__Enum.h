#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossEntity_Phases__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity_Phases__Enum__Array.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity_Phases__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEntity_Phases__Enum {
        inline app::PetrifiedOwlBossEntity_Phases__Enum__Class** type_info() {
            static app::PetrifiedOwlBossEntity_Phases__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossEntity_Phases__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossEntity_Phases__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEntity_Phases__Enum__Class>(type_info(), "", "PetrifiedOwlBossEntity", "Phases");
        }
        inline app::PetrifiedOwlBossEntity_Phases__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEntity_Phases__Enum>(get_class());
        }
        inline app::PetrifiedOwlBossEntity_Phases__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::PetrifiedOwlBossEntity_Phases__Enum__Array>(get_class(), size);
        }
        inline app::PetrifiedOwlBossEntity_Phases__Enum__Array* create_array(const std::vector<app::PetrifiedOwlBossEntity_Phases__Enum*>& items) {
            return il2cpp::array_new<app::PetrifiedOwlBossEntity_Phases__Enum__Array>(get_class(), items);
        }
    } // namespace PetrifiedOwlBossEntity_Phases__Enum
} // namespace app::classes::types
