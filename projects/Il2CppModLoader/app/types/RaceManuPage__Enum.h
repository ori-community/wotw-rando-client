#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceManuPage__Enum {
        namespace {
            app::RaceManuPage__Enum__Class* type_info_ref = nullptr;
        }
        app::RaceManuPage__Enum__Class** type_info = &type_info_ref;
        inline app::RaceManuPage__Enum__Class* get_class() {
            return il2cpp::get_class<app::RaceManuPage__Enum__Class>(type_info, "", "RaceManuPage");
        }
        inline app::RaceManuPage__Enum* create() {
            return il2cpp::create_object<app::RaceManuPage__Enum>(get_class());
        }
    } // namespace RaceManuPage__Enum
} // namespace app::classes::types
