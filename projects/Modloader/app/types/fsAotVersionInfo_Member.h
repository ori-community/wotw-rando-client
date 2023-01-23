#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsAotVersionInfo_Member__Class.h>
#include <Modloader/app/structs/fsAotVersionInfo_Member.h>
#include <Modloader/app/structs/fsAotVersionInfo_Member__Boxed.h>
#include <Modloader/app/structs/fsAotVersionInfo_Member__Array.h>

namespace app::classes::types {
    namespace fsAotVersionInfo_Member {
        inline app::fsAotVersionInfo_Member__Class** type_info = (app::fsAotVersionInfo_Member__Class**)(modloader::win::memory::resolve_rva(0x04716148));
        inline app::fsAotVersionInfo_Member__Class* get_class() {
            return il2cpp::get_nested_class<app::fsAotVersionInfo_Member__Class>(type_info, "FullSerializer", "fsAotVersionInfo", "Member");
        }
        inline app::fsAotVersionInfo_Member* create() {
            return il2cpp::create_object<app::fsAotVersionInfo_Member>(get_class());
        }
        inline app::fsAotVersionInfo_Member__Boxed* box(app::fsAotVersionInfo_Member value) {
            return il2cpp::box_value<app::fsAotVersionInfo_Member__Boxed>(get_class(), value);
        }
        inline app::fsAotVersionInfo_Member__Array* create_array(int size) {
            return il2cpp::array_new<app::fsAotVersionInfo_Member__Array>(get_class(), size);
        }
        inline app::fsAotVersionInfo_Member__Array* create_array(const std::vector<app::fsAotVersionInfo_Member>& items) {
            return il2cpp::array_new<app::fsAotVersionInfo_Member__Array>(get_class(), items);
        }
    } // namespace fsAotVersionInfo_Member
} // namespace app::classes::types
