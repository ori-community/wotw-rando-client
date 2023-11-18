#pragma once
#include <Modloader/app/structs/RestartReason__Enum.h>
#include <Modloader/app/structs/RestartReason__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RestartReason__Enum {
        inline app::RestartReason__Enum__Class** type_info() {
            static app::RestartReason__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RestartReason__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470CB58));
            }
            return cache;
        }
        inline app::RestartReason__Enum__Class* get_class() {
            return il2cpp::get_class<app::RestartReason__Enum__Class>(type_info(), "", "RestartReason");
        }
        inline app::RestartReason__Enum* create() {
            return il2cpp::create_object<app::RestartReason__Enum>(get_class());
        }
    } // namespace RestartReason__Enum
} // namespace app::classes::types
