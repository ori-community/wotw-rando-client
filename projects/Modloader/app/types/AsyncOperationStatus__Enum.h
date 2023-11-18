#pragma once
#include <Modloader/app/structs/AsyncOperationStatus__Enum.h>
#include <Modloader/app/structs/AsyncOperationStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncOperationStatus__Enum {
        inline app::AsyncOperationStatus__Enum__Class** type_info() {
            static app::AsyncOperationStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncOperationStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncOperationStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::AsyncOperationStatus__Enum__Class>(type_info(), "Mono.Net.Security", "AsyncOperationStatus");
        }
        inline app::AsyncOperationStatus__Enum* create() {
            return il2cpp::create_object<app::AsyncOperationStatus__Enum>(get_class());
        }
    } // namespace AsyncOperationStatus__Enum
} // namespace app::classes::types
