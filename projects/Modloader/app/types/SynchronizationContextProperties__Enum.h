#pragma once
#include <Modloader/app/structs/SynchronizationContextProperties__Enum.h>
#include <Modloader/app/structs/SynchronizationContextProperties__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SynchronizationContextProperties__Enum {
        inline app::SynchronizationContextProperties__Enum__Class** type_info() {
            static app::SynchronizationContextProperties__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SynchronizationContextProperties__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SynchronizationContextProperties__Enum__Class* get_class() {
            return il2cpp::get_class<app::SynchronizationContextProperties__Enum__Class>(type_info(), "System.Threading", "SynchronizationContextProperties");
        }
        inline app::SynchronizationContextProperties__Enum* create() {
            return il2cpp::create_object<app::SynchronizationContextProperties__Enum>(get_class());
        }
    } // namespace SynchronizationContextProperties__Enum
} // namespace app::classes::types
