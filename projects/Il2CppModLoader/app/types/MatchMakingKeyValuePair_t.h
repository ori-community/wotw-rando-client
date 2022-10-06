#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchMakingKeyValuePair_t {
        namespace {
            app::MatchMakingKeyValuePair_t__Class* type_info_ref = nullptr;
        }
        app::MatchMakingKeyValuePair_t__Class** type_info = &type_info_ref;
        inline app::MatchMakingKeyValuePair_t__Class* get_class() {
            return il2cpp::get_class<app::MatchMakingKeyValuePair_t__Class>(type_info, "Steamworks", "MatchMakingKeyValuePair_t");
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
        inline app::MatchMakingKeyValuePair_t__Array* create_array(const std::vector<app::MatchMakingKeyValuePair_t__Boxed>& items) {
            return il2cpp::array_new<app::MatchMakingKeyValuePair_t__Array>(get_class(), items);
        }
    } // namespace MatchMakingKeyValuePair_t
} // namespace app::classes::types
