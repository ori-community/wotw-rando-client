#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EmitEventResult__Enum {
        namespace {
            inline app::EmitEventResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EmitEventResult__Enum__Class** type_info = &type_info_ref;
        inline app::EmitEventResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::EmitEventResult__Enum__Class>(type_info, "PlayFab", "EmitEventResult");
        }
        inline app::EmitEventResult__Enum* create() {
            return il2cpp::create_object<app::EmitEventResult__Enum>(get_class());
        }
    } // namespace EmitEventResult__Enum
} // namespace app::classes::types
