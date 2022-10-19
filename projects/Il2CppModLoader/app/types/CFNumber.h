#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CFNumber {
        namespace {
            inline app::CFNumber__Class* type_info_ref = nullptr;
        }
        inline app::CFNumber__Class** type_info = &type_info_ref;
        inline app::CFNumber__Class* get_class() {
            return il2cpp::get_class<app::CFNumber__Class>(type_info, "Mono.Net", "CFNumber");
        }
        inline app::CFNumber* create() {
            return il2cpp::create_object<app::CFNumber>(get_class());
        }
    } // namespace CFNumber
} // namespace app::classes::types
