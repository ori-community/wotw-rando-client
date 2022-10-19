#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JoinPartyCallback_t {
        namespace {
            inline app::JoinPartyCallback_t__Class* type_info_ref = nullptr;
        }
        inline app::JoinPartyCallback_t__Class** type_info = &type_info_ref;
        inline app::JoinPartyCallback_t__Class* get_class() {
            return il2cpp::get_class<app::JoinPartyCallback_t__Class>(type_info, "Steamworks", "JoinPartyCallback_t");
        }
        inline app::JoinPartyCallback_t* create() {
            return il2cpp::create_object<app::JoinPartyCallback_t>(get_class());
        }
        inline app::JoinPartyCallback_t__Boxed* box(app::JoinPartyCallback_t value) {
            return il2cpp::box_value<app::JoinPartyCallback_t__Boxed>(get_class(), value);
        }
    } // namespace JoinPartyCallback_t
} // namespace app::classes::types
