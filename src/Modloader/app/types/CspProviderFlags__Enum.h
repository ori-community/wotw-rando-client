#pragma once
#include <Modloader/app/structs/CspProviderFlags__Enum.h>
#include <Modloader/app/structs/CspProviderFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CspProviderFlags__Enum {
        inline app::CspProviderFlags__Enum__Class** type_info() {
            static app::CspProviderFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CspProviderFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CspProviderFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::CspProviderFlags__Enum__Class>(type_info(), "System.Security.Cryptography", "CspProviderFlags");
        }
        inline app::CspProviderFlags__Enum* create() {
            return il2cpp::create_object<app::CspProviderFlags__Enum>(get_class());
        }
    } // namespace CspProviderFlags__Enum
} // namespace app::classes::types
