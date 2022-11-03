#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HandledEventArgs {
        namespace {
            inline app::HandledEventArgs__Class* type_info_ref = nullptr;
        }
        inline app::HandledEventArgs__Class** type_info = &type_info_ref;
        inline app::HandledEventArgs__Class* get_class() {
            return il2cpp::get_class<app::HandledEventArgs__Class>(type_info, "System.ComponentModel", "HandledEventArgs");
        }
        inline app::HandledEventArgs* create() {
            return il2cpp::create_object<app::HandledEventArgs>(get_class());
        }
    } // namespace HandledEventArgs
} // namespace app::classes::types
