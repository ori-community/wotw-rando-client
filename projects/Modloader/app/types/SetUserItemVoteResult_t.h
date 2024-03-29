#pragma once
#include <Modloader/app/structs/SetUserItemVoteResult_t.h>
#include <Modloader/app/structs/SetUserItemVoteResult_t__Boxed.h>
#include <Modloader/app/structs/SetUserItemVoteResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetUserItemVoteResult_t {
        inline app::SetUserItemVoteResult_t__Class** type_info() {
            static app::SetUserItemVoteResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetUserItemVoteResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetUserItemVoteResult_t__Class* get_class() {
            return il2cpp::get_class<app::SetUserItemVoteResult_t__Class>(type_info(), "Steamworks", "SetUserItemVoteResult_t");
        }
        inline app::SetUserItemVoteResult_t* create() {
            return il2cpp::create_object<app::SetUserItemVoteResult_t>(get_class());
        }
        inline app::SetUserItemVoteResult_t__Boxed* box(app::SetUserItemVoteResult_t value) {
            return il2cpp::box_value<app::SetUserItemVoteResult_t__Boxed>(get_class(), value);
        }
    } // namespace SetUserItemVoteResult_t
} // namespace app::classes::types
