#pragma once
#include <Modloader/app/structs/GetUserItemVoteResult_t.h>
#include <Modloader/app/structs/GetUserItemVoteResult_t__Boxed.h>
#include <Modloader/app/structs/GetUserItemVoteResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetUserItemVoteResult_t {
        inline app::GetUserItemVoteResult_t__Class** type_info() {
            static app::GetUserItemVoteResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetUserItemVoteResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetUserItemVoteResult_t__Class* get_class() {
            return il2cpp::get_class<app::GetUserItemVoteResult_t__Class>(type_info(), "Steamworks", "GetUserItemVoteResult_t");
        }
        inline app::GetUserItemVoteResult_t* create() {
            return il2cpp::create_object<app::GetUserItemVoteResult_t>(get_class());
        }
        inline app::GetUserItemVoteResult_t__Boxed* box(app::GetUserItemVoteResult_t value) {
            return il2cpp::box_value<app::GetUserItemVoteResult_t__Boxed>(get_class(), value);
        }
    } // namespace GetUserItemVoteResult_t
} // namespace app::classes::types
