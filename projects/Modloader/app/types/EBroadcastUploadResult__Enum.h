#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EBroadcastUploadResult__Enum__Class.h>
#include <Modloader/app/structs/EBroadcastUploadResult__Enum.h>

namespace app::classes::types {
    namespace EBroadcastUploadResult__Enum {
        namespace {
            inline app::EBroadcastUploadResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EBroadcastUploadResult__Enum__Class** type_info = &type_info_ref;
        inline app::EBroadcastUploadResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::EBroadcastUploadResult__Enum__Class>(type_info, "Steamworks", "EBroadcastUploadResult");
        }
        inline app::EBroadcastUploadResult__Enum* create() {
            return il2cpp::create_object<app::EBroadcastUploadResult__Enum>(get_class());
        }
    } // namespace EBroadcastUploadResult__Enum
} // namespace app::classes::types
