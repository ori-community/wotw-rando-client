#pragma once
#include <Modloader/app/structs/GCHandlePtr.h>
#include <Modloader/app/structs/GCHandlePtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GCHandlePtr {
        inline app::GCHandlePtr__Class** type_info() {
            static app::GCHandlePtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GCHandlePtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GCHandlePtr__Class* get_class() {
            return il2cpp::get_class<app::GCHandlePtr__Class>(type_info(), "System.Runtime.InteropServices", "GCHandle*");
        }
        inline app::GCHandlePtr* create() {
            return il2cpp::create_object<app::GCHandlePtr>(get_class());
        }
    } // namespace GCHandlePtr
} // namespace app::classes::types
