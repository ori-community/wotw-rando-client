#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SuspendWhenOtherOutOfFrustrum {
        namespace {
            inline app::SuspendWhenOtherOutOfFrustrum__Class* type_info_ref = nullptr;
        }
        inline app::SuspendWhenOtherOutOfFrustrum__Class** type_info = &type_info_ref;
        inline app::SuspendWhenOtherOutOfFrustrum__Class* get_class() {
            return il2cpp::get_class<app::SuspendWhenOtherOutOfFrustrum__Class>(type_info, "", "SuspendWhenOtherOutOfFrustrum");
        }
        inline app::SuspendWhenOtherOutOfFrustrum* create() {
            return il2cpp::create_object<app::SuspendWhenOtherOutOfFrustrum>(get_class());
        }
    } // namespace SuspendWhenOtherOutOfFrustrum
} // namespace app::classes::types
