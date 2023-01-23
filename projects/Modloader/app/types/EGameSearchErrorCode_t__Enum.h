#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EGameSearchErrorCode_t__Enum__Class.h>
#include <Modloader/app/structs/EGameSearchErrorCode_t__Enum.h>

namespace app::classes::types {
    namespace EGameSearchErrorCode_t__Enum {
        namespace {
            inline app::EGameSearchErrorCode_t__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EGameSearchErrorCode_t__Enum__Class** type_info = &type_info_ref;
        inline app::EGameSearchErrorCode_t__Enum__Class* get_class() {
            return il2cpp::get_class<app::EGameSearchErrorCode_t__Enum__Class>(type_info, "Steamworks", "EGameSearchErrorCode_t");
        }
        inline app::EGameSearchErrorCode_t__Enum* create() {
            return il2cpp::create_object<app::EGameSearchErrorCode_t__Enum>(get_class());
        }
    } // namespace EGameSearchErrorCode_t__Enum
} // namespace app::classes::types
