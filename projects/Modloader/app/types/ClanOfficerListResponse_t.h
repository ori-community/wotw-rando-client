#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ClanOfficerListResponse_t__Class.h>
#include <Modloader/app/structs/ClanOfficerListResponse_t.h>
#include <Modloader/app/structs/ClanOfficerListResponse_t__Boxed.h>

namespace app::classes::types {
    namespace ClanOfficerListResponse_t {
        namespace {
            inline app::ClanOfficerListResponse_t__Class* type_info_ref = nullptr;
        }
        inline app::ClanOfficerListResponse_t__Class** type_info = &type_info_ref;
        inline app::ClanOfficerListResponse_t__Class* get_class() {
            return il2cpp::get_class<app::ClanOfficerListResponse_t__Class>(type_info, "Steamworks", "ClanOfficerListResponse_t");
        }
        inline app::ClanOfficerListResponse_t* create() {
            return il2cpp::create_object<app::ClanOfficerListResponse_t>(get_class());
        }
        inline app::ClanOfficerListResponse_t__Boxed* box(app::ClanOfficerListResponse_t value) {
            return il2cpp::box_value<app::ClanOfficerListResponse_t__Boxed>(get_class(), value);
        }
    } // namespace ClanOfficerListResponse_t
} // namespace app::classes::types
