#pragma once
#include <Modloader/app/structs/XalPlatformOperationResult__Enum.h>
#include <Modloader/app/structs/XalPlatformOperationResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalPlatformOperationResult__Enum {
        inline app::XalPlatformOperationResult__Enum__Class** type_info() {
            static app::XalPlatformOperationResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalPlatformOperationResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalPlatformOperationResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalPlatformOperationResult__Enum__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalPlatformOperationResult");
        }
        inline app::XalPlatformOperationResult__Enum* create() {
            return il2cpp::create_object<app::XalPlatformOperationResult__Enum>(get_class());
        }
    } // namespace XalPlatformOperationResult__Enum
} // namespace app::classes::types
