#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SynchronizationContextProperties__Enum {
        namespace {
            app::SynchronizationContextProperties__Enum__Class* type_info_ref = nullptr;
        }
        app::SynchronizationContextProperties__Enum__Class** type_info = &type_info_ref;
        inline app::SynchronizationContextProperties__Enum__Class* get_class() {
            return il2cpp::get_class<app::SynchronizationContextProperties__Enum__Class>(type_info, "System.Threading", "SynchronizationContextProperties");
        }
        inline app::SynchronizationContextProperties__Enum* create() {
            return il2cpp::create_object<app::SynchronizationContextProperties__Enum>(get_class());
        }
    } // namespace SynchronizationContextProperties__Enum
} // namespace app::classes::types
