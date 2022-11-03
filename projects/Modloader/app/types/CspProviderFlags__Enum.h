#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CspProviderFlags__Enum {
        namespace {
            inline app::CspProviderFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CspProviderFlags__Enum__Class** type_info = &type_info_ref;
        inline app::CspProviderFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::CspProviderFlags__Enum__Class>(type_info, "System.Security.Cryptography", "CspProviderFlags");
        }
        inline app::CspProviderFlags__Enum* create() {
            return il2cpp::create_object<app::CspProviderFlags__Enum>(get_class());
        }
    } // namespace CspProviderFlags__Enum
} // namespace app::classes::types
