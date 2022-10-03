#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ECheckFileSignature__Enum {
        namespace {
            app::ECheckFileSignature__Enum__Class* type_info_ref = nullptr;
        }
        app::ECheckFileSignature__Enum__Class** type_info = &type_info_ref;
        inline app::ECheckFileSignature__Enum__Class* get_class() {
            return il2cpp::get_class<app::ECheckFileSignature__Enum__Class>(type_info, "Steamworks", "ECheckFileSignature");
        }
        inline app::ECheckFileSignature__Enum* create() {
            return il2cpp::create_object<app::ECheckFileSignature__Enum>(get_class());
        }
    } // namespace ECheckFileSignature__Enum
} // namespace app::classes::types
