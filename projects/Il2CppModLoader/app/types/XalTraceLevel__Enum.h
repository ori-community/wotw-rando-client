#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalTraceLevel__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalTraceLevel__Enum__Class** type_info;
        inline app::XalTraceLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalTraceLevel__Enum__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalTraceLevel");
        }
        inline app::XalTraceLevel__Enum* create() {
            return il2cpp::create_object<app::XalTraceLevel__Enum>(get_class());
        }
    } // namespace XalTraceLevel__Enum
} // namespace app::classes::types
