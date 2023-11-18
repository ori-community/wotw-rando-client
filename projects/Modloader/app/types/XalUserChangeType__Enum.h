#pragma once
#include <Modloader/app/structs/XalUserChangeType__Enum.h>
#include <Modloader/app/structs/XalUserChangeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalUserChangeType__Enum {
        inline app::XalUserChangeType__Enum__Class** type_info() {
            static app::XalUserChangeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalUserChangeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04702B08));
            }
            return cache;
        }
        inline app::XalUserChangeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalUserChangeType__Enum__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalUserChangeType");
        }
        inline app::XalUserChangeType__Enum* create() {
            return il2cpp::create_object<app::XalUserChangeType__Enum>(get_class());
        }
    } // namespace XalUserChangeType__Enum
} // namespace app::classes::types
