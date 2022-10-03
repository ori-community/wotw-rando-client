#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalPlatformOperationResult__Enum {
        namespace {
            app::XalPlatformOperationResult__Enum__Class* type_info_ref = nullptr;
        }
        app::XalPlatformOperationResult__Enum__Class** type_info = &type_info_ref;
        inline app::XalPlatformOperationResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalPlatformOperationResult__Enum__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalPlatformOperationResult");
        }
        inline app::XalPlatformOperationResult__Enum* create() {
            return il2cpp::create_object<app::XalPlatformOperationResult__Enum>(get_class());
        }
    } // namespace XalPlatformOperationResult__Enum
} // namespace app::classes::types
