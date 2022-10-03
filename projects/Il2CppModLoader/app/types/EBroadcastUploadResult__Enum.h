#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EBroadcastUploadResult__Enum {
        namespace {
            app::EBroadcastUploadResult__Enum__Class* type_info_ref = nullptr;
        }
        app::EBroadcastUploadResult__Enum__Class** type_info = &type_info_ref;
        inline app::EBroadcastUploadResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::EBroadcastUploadResult__Enum__Class>(type_info, "Steamworks", "EBroadcastUploadResult");
        }
        inline app::EBroadcastUploadResult__Enum* create() {
            return il2cpp::create_object<app::EBroadcastUploadResult__Enum>(get_class());
        }
    } // namespace EBroadcastUploadResult__Enum
} // namespace app::classes::types
