#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsAotVersionInfo_Member__Array {
        namespace {
            inline app::fsAotVersionInfo_Member__Array__Class* type_info_ref = nullptr;
        }
        inline app::fsAotVersionInfo_Member__Array__Class** type_info = &type_info_ref;
        inline app::fsAotVersionInfo_Member__Array__Class* get_class() {
            return il2cpp::get_class<app::fsAotVersionInfo_Member__Array__Class>(type_info, "FullSerializer", "fsAotVersionInfo+Member[]");
        }
        inline app::fsAotVersionInfo_Member__Array* create() {
            return il2cpp::create_object<app::fsAotVersionInfo_Member__Array>(get_class());
        }
    } // namespace fsAotVersionInfo_Member__Array
} // namespace app::classes::types
