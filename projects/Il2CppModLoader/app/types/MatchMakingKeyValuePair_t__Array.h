#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchMakingKeyValuePair_t__Array {
        namespace {
            inline app::MatchMakingKeyValuePair_t__Array__Class* type_info_ref = nullptr;
        }
        inline app::MatchMakingKeyValuePair_t__Array__Class** type_info = &type_info_ref;
        inline app::MatchMakingKeyValuePair_t__Array__Class* get_class() {
            return il2cpp::get_class<app::MatchMakingKeyValuePair_t__Array__Class>(type_info, "Steamworks", "MatchMakingKeyValuePair_t[]");
        }
        inline app::MatchMakingKeyValuePair_t__Array* create() {
            return il2cpp::create_object<app::MatchMakingKeyValuePair_t__Array>(get_class());
        }
    } // namespace MatchMakingKeyValuePair_t__Array
} // namespace app::classes::types
