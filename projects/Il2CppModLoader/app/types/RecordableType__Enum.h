#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordableType__Enum {
        namespace {
            app::RecordableType__Enum__Class* type_info_ref = nullptr;
        }
        app::RecordableType__Enum__Class** type_info = &type_info_ref;
        inline app::RecordableType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RecordableType__Enum__Class>(type_info, "Moon.Timeline", "RecordableType");
        }
        inline app::RecordableType__Enum* create() {
            return il2cpp::create_object<app::RecordableType__Enum>(get_class());
        }
    } // namespace RecordableType__Enum
} // namespace app::classes::types
