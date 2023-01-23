#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EmitEventResult__Enum__Class.h>
#include <Modloader/app/structs/EmitEventResult__Enum.h>

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
