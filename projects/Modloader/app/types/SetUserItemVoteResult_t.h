#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetUserItemVoteResult_t {
        namespace {
            inline app::SetUserItemVoteResult_t__Class* type_info_ref = nullptr;
        }
        inline app::SetUserItemVoteResult_t__Class** type_info = &type_info_ref;
        inline app::SetUserItemVoteResult_t__Class* get_class() {
            return il2cpp::get_class<app::SetUserItemVoteResult_t__Class>(type_info, "Steamworks", "SetUserItemVoteResult_t");
        }
        inline app::SetUserItemVoteResult_t* create() {
            return il2cpp::create_object<app::SetUserItemVoteResult_t>(get_class());
        }
        inline app::SetUserItemVoteResult_t__Boxed* box(app::SetUserItemVoteResult_t value) {
            return il2cpp::box_value<app::SetUserItemVoteResult_t__Boxed>(get_class(), value);
        }
    } // namespace SetUserItemVoteResult_t
} // namespace app::classes::types
