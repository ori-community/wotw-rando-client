#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPickupProcessor_PickupProcessorState__Enum {
        namespace {
            app::SeinPickupProcessor_PickupProcessorState__Enum__Class* type_info_ref = nullptr;
        }
        app::SeinPickupProcessor_PickupProcessorState__Enum__Class** type_info = &type_info_ref;
        inline app::SeinPickupProcessor_PickupProcessorState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinPickupProcessor_PickupProcessorState__Enum__Class>(type_info, "", "SeinPickupProcessor", "PickupProcessorState");
        }
        inline app::SeinPickupProcessor_PickupProcessorState__Enum* create() {
            return il2cpp::create_object<app::SeinPickupProcessor_PickupProcessorState__Enum>(get_class());
        }
    } // namespace SeinPickupProcessor_PickupProcessorState__Enum
} // namespace app::classes::types
