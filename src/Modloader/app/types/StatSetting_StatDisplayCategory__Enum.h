#pragma once
#include <Modloader/app/structs/StatSetting_StatDisplayCategory__Enum.h>
#include <Modloader/app/structs/StatSetting_StatDisplayCategory__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatSetting_StatDisplayCategory__Enum {
        inline app::StatSetting_StatDisplayCategory__Enum__Class** type_info() {
            static app::StatSetting_StatDisplayCategory__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StatSetting_StatDisplayCategory__Enum__Class**)(modloader::win::memory::resolve_rva(0x047554F0));
            }
            return cache;
        }
        inline app::StatSetting_StatDisplayCategory__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StatSetting_StatDisplayCategory__Enum__Class>(type_info(), "", "StatSetting", "StatDisplayCategory");
        }
        inline app::StatSetting_StatDisplayCategory__Enum* create() {
            return il2cpp::create_object<app::StatSetting_StatDisplayCategory__Enum>(get_class());
        }
    } // namespace StatSetting_StatDisplayCategory__Enum
} // namespace app::classes::types
