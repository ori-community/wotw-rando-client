#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoFileType__Enum {
        namespace {
            app::MonoFileType__Enum__Class* type_info_ref = nullptr;
        }
        app::MonoFileType__Enum__Class** type_info = &type_info_ref;
        inline app::MonoFileType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MonoFileType__Enum__Class>(type_info, "System.IO", "MonoFileType");
        }
        inline app::MonoFileType__Enum* create() {
            return il2cpp::create_object<app::MonoFileType__Enum>(get_class());
        }
    } // namespace MonoFileType__Enum
} // namespace app::classes::types
