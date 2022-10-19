#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RebindingReason__Enum {
        namespace {
            inline app::RebindingReason__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RebindingReason__Enum__Class** type_info = &type_info_ref;
        inline app::RebindingReason__Enum__Class* get_class() {
            return il2cpp::get_class<app::RebindingReason__Enum__Class>(type_info, "", "RebindingReason");
        }
        inline app::RebindingReason__Enum* create() {
            return il2cpp::create_object<app::RebindingReason__Enum>(get_class());
        }
    } // namespace RebindingReason__Enum
} // namespace app::classes::types
