#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CancellationReason__Enum__Class.h>
#include <Modloader/app/structs/CancellationReason__Enum.h>

namespace app::classes::types {
    namespace CancellationReason__Enum {
        namespace {
            inline app::CancellationReason__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CancellationReason__Enum__Class** type_info = &type_info_ref;
        inline app::CancellationReason__Enum__Class* get_class() {
            return il2cpp::get_class<app::CancellationReason__Enum__Class>(type_info, "PlayFab.MultiplayerModels", "CancellationReason");
        }
        inline app::CancellationReason__Enum* create() {
            return il2cpp::create_object<app::CancellationReason__Enum>(get_class());
        }
    } // namespace CancellationReason__Enum
} // namespace app::classes::types
