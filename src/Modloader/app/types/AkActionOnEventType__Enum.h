#pragma once
#include <Modloader/app/structs/AkActionOnEventType__Enum.h>
#include <Modloader/app/structs/AkActionOnEventType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkActionOnEventType__Enum {
        inline app::AkActionOnEventType__Enum__Class** type_info() {
            static app::AkActionOnEventType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkActionOnEventType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04772038));
            }
            return cache;
        }
        inline app::AkActionOnEventType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkActionOnEventType__Enum__Class>(type_info(), "", "AkActionOnEventType");
        }
        inline app::AkActionOnEventType__Enum* create() {
            return il2cpp::create_object<app::AkActionOnEventType__Enum>(get_class());
        }
    } // namespace AkActionOnEventType__Enum
} // namespace app::classes::types
