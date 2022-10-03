#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Wiggle_Algorithm__Enum {
        namespace {
            app::Wiggle_Algorithm__Enum__Class* type_info_ref = nullptr;
        }
        app::Wiggle_Algorithm__Enum__Class** type_info = &type_info_ref;
        inline app::Wiggle_Algorithm__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Wiggle_Algorithm__Enum__Class>(type_info, "Colorful", "Wiggle", "Algorithm");
        }
        inline app::Wiggle_Algorithm__Enum* create() {
            return il2cpp::create_object<app::Wiggle_Algorithm__Enum>(get_class());
        }
    } // namespace Wiggle_Algorithm__Enum
} // namespace app::classes::types
