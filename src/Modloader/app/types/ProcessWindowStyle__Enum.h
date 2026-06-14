#pragma once
#include <Modloader/app/structs/ProcessWindowStyle__Enum.h>
#include <Modloader/app/structs/ProcessWindowStyle__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProcessWindowStyle__Enum {
        inline app::ProcessWindowStyle__Enum__Class** type_info() {
            static app::ProcessWindowStyle__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProcessWindowStyle__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474A000));
            }
            return cache;
        }
        inline app::ProcessWindowStyle__Enum__Class* get_class() {
            return il2cpp::get_class<app::ProcessWindowStyle__Enum__Class>(type_info(), "System.Diagnostics", "ProcessWindowStyle");
        }
        inline app::ProcessWindowStyle__Enum* create() {
            return il2cpp::create_object<app::ProcessWindowStyle__Enum>(get_class());
        }
    } // namespace ProcessWindowStyle__Enum
} // namespace app::classes::types
