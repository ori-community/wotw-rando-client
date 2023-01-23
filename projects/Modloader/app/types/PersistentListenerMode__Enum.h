#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PersistentListenerMode__Enum__Class.h>
#include <Modloader/app/structs/PersistentListenerMode__Enum.h>

namespace app::classes::types {
    namespace PersistentListenerMode__Enum {
        namespace {
            inline app::PersistentListenerMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PersistentListenerMode__Enum__Class** type_info = &type_info_ref;
        inline app::PersistentListenerMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::PersistentListenerMode__Enum__Class>(type_info, "UnityEngine.Events", "PersistentListenerMode");
        }
        inline app::PersistentListenerMode__Enum* create() {
            return il2cpp::create_object<app::PersistentListenerMode__Enum>(get_class());
        }
    } // namespace PersistentListenerMode__Enum
} // namespace app::classes::types
