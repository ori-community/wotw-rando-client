#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HandleRef__Class.h>
#include <Modloader/app/structs/HandleRef.h>
#include <Modloader/app/structs/HandleRef__Boxed.h>

namespace app::classes::types {
    namespace HandleRef {
        namespace {
            inline app::HandleRef__Class* type_info_ref = nullptr;
        }
        inline app::HandleRef__Class** type_info = &type_info_ref;
        inline app::HandleRef__Class* get_class() {
            return il2cpp::get_class<app::HandleRef__Class>(type_info, "System.Runtime.InteropServices", "HandleRef");
        }
        inline app::HandleRef* create() {
            return il2cpp::create_object<app::HandleRef>(get_class());
        }
        inline app::HandleRef__Boxed* box(app::HandleRef value) {
            return il2cpp::box_value<app::HandleRef__Boxed>(get_class(), value);
        }
    } // namespace HandleRef
} // namespace app::classes::types
