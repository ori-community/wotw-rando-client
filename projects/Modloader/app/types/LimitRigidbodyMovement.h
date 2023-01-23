#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LimitRigidbodyMovement__Class.h>
#include <Modloader/app/structs/LimitRigidbodyMovement.h>

namespace app::classes::types {
    namespace LimitRigidbodyMovement {
        namespace {
            inline app::LimitRigidbodyMovement__Class* type_info_ref = nullptr;
        }
        inline app::LimitRigidbodyMovement__Class** type_info = &type_info_ref;
        inline app::LimitRigidbodyMovement__Class* get_class() {
            return il2cpp::get_class<app::LimitRigidbodyMovement__Class>(type_info, "", "LimitRigidbodyMovement");
        }
        inline app::LimitRigidbodyMovement* create() {
            return il2cpp::create_object<app::LimitRigidbodyMovement>(get_class());
        }
    } // namespace LimitRigidbodyMovement
} // namespace app::classes::types
