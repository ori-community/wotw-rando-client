#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum__Class.h>
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum.h>

namespace app::classes::types {
    namespace SuspendWhenOutOfFrustrum {
        namespace {
            inline app::SuspendWhenOutOfFrustrum__Class* type_info_ref = nullptr;
        }
        inline app::SuspendWhenOutOfFrustrum__Class** type_info = &type_info_ref;
        inline app::SuspendWhenOutOfFrustrum__Class* get_class() {
            return il2cpp::get_class<app::SuspendWhenOutOfFrustrum__Class>(type_info, "", "SuspendWhenOutOfFrustrum");
        }
        inline app::SuspendWhenOutOfFrustrum* create() {
            return il2cpp::create_object<app::SuspendWhenOutOfFrustrum>(get_class());
        }
    } // namespace SuspendWhenOutOfFrustrum
} // namespace app::classes::types
