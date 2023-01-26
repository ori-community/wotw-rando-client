#pragma once
#include <Modloader/app/structs/MatchMakingKeyValuePair_t.h>
#include <Modloader/app/structs/MatchMakingKeyValuePair_t__Array.h>
#include <Modloader/app/structs/MatchMakingKeyValuePair_t__Boxed.h>
#include <Modloader/app/structs/MatchMakingKeyValuePair_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchMakingKeyValuePair_t {
        inline app::MatchMakingKeyValuePair_t__Class** type_info() {
            static app::MatchMakingKeyValuePair_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchMakingKeyValuePair_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchMakingKeyValuePair_t__Class* get_class() {
            return il2cpp::get_class<app::MatchMakingKeyValuePair_t__Class>(type_info(), "Steamworks", "MatchMakingKeyValuePair_t");
        }
        inline app::MatchMakingKeyValuePair_t* create() {
            return il2cpp::create_object<app::MatchMakingKeyValuePair_t>(get_class());
        }
        inline app::MatchMakingKeyValuePair_t__Boxed* box(app::MatchMakingKeyValuePair_t value) {
            return il2cpp::box_value<app::MatchMakingKeyValuePair_t__Boxed>(get_class(), value);
        }
        inline app::MatchMakingKeyValuePair_t__Array* create_array(int size) {
            return il2cpp::array_new<app::MatchMakingKeyValuePair_t__Array>(get_class(), size);
        }
        inline app::MatchMakingKeyValuePair_t__Array* create_array(const std::vector<app::MatchMakingKeyValuePair_t>& items) {
            return il2cpp::array_new<app::MatchMakingKeyValuePair_t__Array>(get_class(), items);
        }
    } // namespace MatchMakingKeyValuePair_t
} // namespace app::classes::types
