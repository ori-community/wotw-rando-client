#pragma once
#include <Modloader/app/structs/EventOpcode__Enum.h>
#include <Modloader/app/structs/EventOpcode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventOpcode__Enum {
        inline app::EventOpcode__Enum__Class** type_info() {
            static app::EventOpcode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventOpcode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04768000));
            }
            return cache;
        }
        inline app::EventOpcode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventOpcode__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "EventOpcode");
        }
        inline app::EventOpcode__Enum* create() {
            return il2cpp::create_object<app::EventOpcode__Enum>(get_class());
        }
    } // namespace EventOpcode__Enum
} // namespace app::classes::types
