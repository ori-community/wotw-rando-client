#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DesiredPlayerAbilityState__Class.h>
#include <Modloader/app/structs/DesiredPlayerAbilityState.h>

namespace app::classes::types {
    namespace DesiredPlayerAbilityState {
        namespace {
            inline app::DesiredPlayerAbilityState__Class* type_info_ref = nullptr;
        }
        inline app::DesiredPlayerAbilityState__Class** type_info = &type_info_ref;
        inline app::DesiredPlayerAbilityState__Class* get_class() {
            return il2cpp::get_class<app::DesiredPlayerAbilityState__Class>(type_info, "Moon.uberSerializationWisp", "DesiredPlayerAbilityState");
        }
        inline app::DesiredPlayerAbilityState* create() {
            return il2cpp::create_object<app::DesiredPlayerAbilityState>(get_class());
        }
    } // namespace DesiredPlayerAbilityState
} // namespace app::classes::types
