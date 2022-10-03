#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalAgeGroup__Enum {
        namespace {
            app::XalAgeGroup__Enum__Class* type_info_ref = nullptr;
        }
        app::XalAgeGroup__Enum__Class** type_info = &type_info_ref;
        inline app::XalAgeGroup__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalAgeGroup__Enum__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalAgeGroup");
        }
        inline app::XalAgeGroup__Enum* create() {
            return il2cpp::create_object<app::XalAgeGroup__Enum>(get_class());
        }
    } // namespace XalAgeGroup__Enum
} // namespace app::classes::types
