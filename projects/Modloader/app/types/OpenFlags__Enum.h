#pragma once
#include <Modloader/app/structs/OpenFlags__Enum.h>
#include <Modloader/app/structs/OpenFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OpenFlags__Enum {
        inline app::OpenFlags__Enum__Class** type_info() {
            static app::OpenFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OpenFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OpenFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::OpenFlags__Enum__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "OpenFlags");
        }
        inline app::OpenFlags__Enum* create() {
            return il2cpp::create_object<app::OpenFlags__Enum>(get_class());
        }
    } // namespace OpenFlags__Enum
} // namespace app::classes::types
