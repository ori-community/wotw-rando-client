#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SuspendWhenOtherOutOfFrustrum__Class.h>
#include <Modloader/app/structs/SuspendWhenOtherOutOfFrustrum.h>

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
