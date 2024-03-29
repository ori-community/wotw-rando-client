#pragma once
#include <Modloader/app/structs/SeinPickupProcessor_PickupProcessorState__Enum.h>
#include <Modloader/app/structs/SeinPickupProcessor_PickupProcessorState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPickupProcessor_PickupProcessorState__Enum {
        inline app::SeinPickupProcessor_PickupProcessorState__Enum__Class** type_info() {
            static app::SeinPickupProcessor_PickupProcessorState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinPickupProcessor_PickupProcessorState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinPickupProcessor_PickupProcessorState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinPickupProcessor_PickupProcessorState__Enum__Class>(type_info(), "", "SeinPickupProcessor", "PickupProcessorState");
        }
        inline app::SeinPickupProcessor_PickupProcessorState__Enum* create() {
            return il2cpp::create_object<app::SeinPickupProcessor_PickupProcessorState__Enum>(get_class());
        }
    } // namespace SeinPickupProcessor_PickupProcessorState__Enum
} // namespace app::classes::types
