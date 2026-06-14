#pragma once
#include <Modloader/app/structs/ECheckFileSignature__Enum.h>
#include <Modloader/app/structs/ECheckFileSignature__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ECheckFileSignature__Enum {
        inline app::ECheckFileSignature__Enum__Class** type_info() {
            static app::ECheckFileSignature__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ECheckFileSignature__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ECheckFileSignature__Enum__Class* get_class() {
            return il2cpp::get_class<app::ECheckFileSignature__Enum__Class>(type_info(), "Steamworks", "ECheckFileSignature");
        }
        inline app::ECheckFileSignature__Enum* create() {
            return il2cpp::create_object<app::ECheckFileSignature__Enum>(get_class());
        }
    } // namespace ECheckFileSignature__Enum
} // namespace app::classes::types
