#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PipeOptions__Enum {
        namespace {
            app::PipeOptions__Enum__Class* type_info_ref = nullptr;
        }
        app::PipeOptions__Enum__Class** type_info = &type_info_ref;
        inline app::PipeOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::PipeOptions__Enum__Class>(type_info, "System.IO.Pipes", "PipeOptions");
        }
        inline app::PipeOptions__Enum* create() {
            return il2cpp::create_object<app::PipeOptions__Enum>(get_class());
        }
    } // namespace PipeOptions__Enum
} // namespace app::classes::types
