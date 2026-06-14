#pragma once
#include <Modloader/app/structs/LeaseState__Enum.h>
#include <Modloader/app/structs/LeaseState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaseState__Enum {
        inline app::LeaseState__Enum__Class** type_info() {
            static app::LeaseState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaseState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471FDD0));
            }
            return cache;
        }
        inline app::LeaseState__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeaseState__Enum__Class>(type_info(), "System.Runtime.Remoting.Lifetime", "LeaseState");
        }
        inline app::LeaseState__Enum* create() {
            return il2cpp::create_object<app::LeaseState__Enum>(get_class());
        }
    } // namespace LeaseState__Enum
} // namespace app::classes::types
