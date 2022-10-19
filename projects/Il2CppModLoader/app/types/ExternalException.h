#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExternalException {
        namespace {
            inline app::ExternalException__Class* type_info_ref = nullptr;
        }
        inline app::ExternalException__Class** type_info = &type_info_ref;
        inline app::ExternalException__Class* get_class() {
            return il2cpp::get_class<app::ExternalException__Class>(type_info, "System.Runtime.InteropServices", "ExternalException");
        }
        inline app::ExternalException* create() {
            return il2cpp::create_object<app::ExternalException>(get_class());
        }
    } // namespace ExternalException
} // namespace app::classes::types
