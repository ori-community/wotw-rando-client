#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkGlobalCallbackLocation__Enum {
        namespace {
            app::AkGlobalCallbackLocation__Enum__Class* type_info_ref = nullptr;
        }
        app::AkGlobalCallbackLocation__Enum__Class** type_info = &type_info_ref;
        inline app::AkGlobalCallbackLocation__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkGlobalCallbackLocation__Enum__Class>(type_info, "", "AkGlobalCallbackLocation");
        }
        inline app::AkGlobalCallbackLocation__Enum* create() {
            return il2cpp::create_object<app::AkGlobalCallbackLocation__Enum>(get_class());
        }
    } // namespace AkGlobalCallbackLocation__Enum
} // namespace app::classes::types
