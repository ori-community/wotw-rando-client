#pragma once
#include <Modloader/app/structs/MatchMakingKeyValuePair_t__Array.h>
#include <Modloader/app/structs/MatchMakingKeyValuePair_t__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchMakingKeyValuePair_t__Array {
        inline app::MatchMakingKeyValuePair_t__Array__Class** type_info() {
            static app::MatchMakingKeyValuePair_t__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchMakingKeyValuePair_t__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchMakingKeyValuePair_t__Array__Class* get_class() {
            return il2cpp::get_class<app::MatchMakingKeyValuePair_t__Array__Class>(type_info(), "Steamworks", "MatchMakingKeyValuePair_t[]");
        }
        inline app::MatchMakingKeyValuePair_t__Array* create() {
            return il2cpp::create_object<app::MatchMakingKeyValuePair_t__Array>(get_class());
        }
    } // namespace MatchMakingKeyValuePair_t__Array
} // namespace app::classes::types
