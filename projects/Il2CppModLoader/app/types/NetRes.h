#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NetRes {
        namespace {
            inline app::NetRes__Class* type_info_ref = nullptr;
        }
        inline app::NetRes__Class** type_info = &type_info_ref;
        inline app::NetRes__Class* get_class() {
            return il2cpp::get_class<app::NetRes__Class>(type_info, "System.Net", "NetRes");
        }
        inline app::NetRes* create() {
            return il2cpp::create_object<app::NetRes>(get_class());
        }
    } // namespace NetRes
} // namespace app::classes::types
