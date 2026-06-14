#pragma once
#include <Modloader/app/structs/GenericErrorCodes__Enum.h>
#include <Modloader/app/structs/GenericErrorCodes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericErrorCodes__Enum {
        inline app::GenericErrorCodes__Enum__Class** type_info() {
            static app::GenericErrorCodes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericErrorCodes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericErrorCodes__Enum__Class* get_class() {
            return il2cpp::get_class<app::GenericErrorCodes__Enum__Class>(type_info(), "PlayFab.ServerModels", "GenericErrorCodes");
        }
        inline app::GenericErrorCodes__Enum* create() {
            return il2cpp::create_object<app::GenericErrorCodes__Enum>(get_class());
        }
    } // namespace GenericErrorCodes__Enum
} // namespace app::classes::types
