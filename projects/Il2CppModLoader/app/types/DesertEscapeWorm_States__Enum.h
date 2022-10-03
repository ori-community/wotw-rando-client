#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesertEscapeWorm_States__Enum {
        namespace {
            app::DesertEscapeWorm_States__Enum__Class* type_info_ref = nullptr;
        }
        app::DesertEscapeWorm_States__Enum__Class** type_info = &type_info_ref;
        inline app::DesertEscapeWorm_States__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DesertEscapeWorm_States__Enum__Class>(type_info, "", "DesertEscapeWorm", "States");
        }
        inline app::DesertEscapeWorm_States__Enum* create() {
            return il2cpp::create_object<app::DesertEscapeWorm_States__Enum>(get_class());
        }
    } // namespace DesertEscapeWorm_States__Enum
} // namespace app::classes::types
