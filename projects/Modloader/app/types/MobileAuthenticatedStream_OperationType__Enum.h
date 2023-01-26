#pragma once
#include <Modloader/app/structs/MobileAuthenticatedStream_OperationType__Enum.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_OperationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MobileAuthenticatedStream_OperationType__Enum {
        inline app::MobileAuthenticatedStream_OperationType__Enum__Class** type_info() {
            static app::MobileAuthenticatedStream_OperationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MobileAuthenticatedStream_OperationType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MobileAuthenticatedStream_OperationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MobileAuthenticatedStream_OperationType__Enum__Class>(type_info(), "Mono.Net.Security", "MobileAuthenticatedStream", "OperationType");
        }
        inline app::MobileAuthenticatedStream_OperationType__Enum* create() {
            return il2cpp::create_object<app::MobileAuthenticatedStream_OperationType__Enum>(get_class());
        }
    } // namespace MobileAuthenticatedStream_OperationType__Enum
} // namespace app::classes::types
