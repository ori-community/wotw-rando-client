#pragma once
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/AbilityType__Enum__Array.h>
#include <Modloader/app/structs/AbilityType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AbilityType__Enum {
        inline app::AbilityType__Enum__Class** type_info() {
            static app::AbilityType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AbilityType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04797D88));
            }
            return cache;
        }
        inline app::AbilityType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AbilityType__Enum__Class>(type_info(), "", "AbilityType");
        }
        inline app::AbilityType__Enum* create() {
            return il2cpp::create_object<app::AbilityType__Enum>(get_class());
        }
        inline app::AbilityType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::AbilityType__Enum__Array>(get_class(), size);
        }
        inline app::AbilityType__Enum__Array* create_array(const std::vector<app::AbilityType__Enum*>& items) {
            return il2cpp::array_new<app::AbilityType__Enum__Array>(get_class(), items);
        }
    } // namespace AbilityType__Enum
} // namespace app::classes::types
