#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsAotVersionInfo_Member__Array {
        namespace {
            app::fsAotVersionInfo_Member__Array__Class* type_info_ref = nullptr;
        }
        app::fsAotVersionInfo_Member__Array__Class** type_info = &type_info_ref;
        inline app::fsAotVersionInfo_Member__Array__Class* get_class() {
            return il2cpp::get_class<app::fsAotVersionInfo_Member__Array__Class>(type_info, "FullSerializer", "fsAotVersionInfo+Member[]");
        }
        inline app::fsAotVersionInfo_Member__Array* create() {
            return il2cpp::create_object<app::fsAotVersionInfo_Member__Array>(get_class());
        }
    } // namespace fsAotVersionInfo_Member__Array
} // namespace app::classes::types
