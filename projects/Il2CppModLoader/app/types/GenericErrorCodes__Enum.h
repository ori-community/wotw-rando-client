#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericErrorCodes__Enum {
        namespace {
            inline app::GenericErrorCodes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GenericErrorCodes__Enum__Class** type_info = &type_info_ref;
        inline app::GenericErrorCodes__Enum__Class* get_class() {
            return il2cpp::get_class<app::GenericErrorCodes__Enum__Class>(type_info, "PlayFab.ServerModels", "GenericErrorCodes");
        }
        inline app::GenericErrorCodes__Enum* create() {
            return il2cpp::create_object<app::GenericErrorCodes__Enum>(get_class());
        }
    } // namespace GenericErrorCodes__Enum
} // namespace app::classes::types
