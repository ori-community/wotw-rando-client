#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExplodingRigidbody__Class.h>
#include <Modloader/app/structs/ExplodingRigidbody.h>

namespace app::classes::types {
    namespace ExplodingRigidbody {
        namespace {
            inline app::ExplodingRigidbody__Class* type_info_ref = nullptr;
        }
        inline app::ExplodingRigidbody__Class** type_info = &type_info_ref;
        inline app::ExplodingRigidbody__Class* get_class() {
            return il2cpp::get_class<app::ExplodingRigidbody__Class>(type_info, "", "ExplodingRigidbody");
        }
        inline app::ExplodingRigidbody* create() {
            return il2cpp::create_object<app::ExplodingRigidbody>(get_class());
        }
    } // namespace ExplodingRigidbody
} // namespace app::classes::types
