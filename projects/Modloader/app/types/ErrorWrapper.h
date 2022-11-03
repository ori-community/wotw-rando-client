#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ErrorWrapper {
        namespace {
            inline app::ErrorWrapper__Class* type_info_ref = nullptr;
        }
        inline app::ErrorWrapper__Class** type_info = &type_info_ref;
        inline app::ErrorWrapper__Class* get_class() {
            return il2cpp::get_class<app::ErrorWrapper__Class>(type_info, "System.Runtime.InteropServices", "ErrorWrapper");
        }
        inline app::ErrorWrapper* create() {
            return il2cpp::create_object<app::ErrorWrapper>(get_class());
        }
    } // namespace ErrorWrapper
} // namespace app::classes::types
