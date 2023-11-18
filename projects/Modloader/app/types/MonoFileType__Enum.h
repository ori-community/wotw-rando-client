#pragma once
#include <Modloader/app/structs/MonoFileType__Enum.h>
#include <Modloader/app/structs/MonoFileType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoFileType__Enum {
        inline app::MonoFileType__Enum__Class** type_info() {
            static app::MonoFileType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoFileType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoFileType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MonoFileType__Enum__Class>(type_info(), "System.IO", "MonoFileType");
        }
        inline app::MonoFileType__Enum* create() {
            return il2cpp::create_object<app::MonoFileType__Enum>(get_class());
        }
    } // namespace MonoFileType__Enum
} // namespace app::classes::types
