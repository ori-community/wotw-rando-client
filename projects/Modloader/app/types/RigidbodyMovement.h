#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidbodyMovement {
        namespace {
            inline app::RigidbodyMovement__Class* type_info_ref = nullptr;
        }
        inline app::RigidbodyMovement__Class** type_info = &type_info_ref;
        inline app::RigidbodyMovement__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyMovement__Class>(type_info, "", "RigidbodyMovement");
        }
        inline app::RigidbodyMovement* create() {
            return il2cpp::create_object<app::RigidbodyMovement>(get_class());
        }
    } // namespace RigidbodyMovement
} // namespace app::classes::types
