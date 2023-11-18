#pragma once
#include <Modloader/app/structs/AcceptRejectRule__Enum.h>
#include <Modloader/app/structs/AcceptRejectRule__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcceptRejectRule__Enum {
        inline app::AcceptRejectRule__Enum__Class** type_info() {
            static app::AcceptRejectRule__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AcceptRejectRule__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475DAE0));
            }
            return cache;
        }
        inline app::AcceptRejectRule__Enum__Class* get_class() {
            return il2cpp::get_class<app::AcceptRejectRule__Enum__Class>(type_info(), "System.Data", "AcceptRejectRule");
        }
        inline app::AcceptRejectRule__Enum* create() {
            return il2cpp::create_object<app::AcceptRejectRule__Enum>(get_class());
        }
    } // namespace AcceptRejectRule__Enum
} // namespace app::classes::types
