#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RigidbodySuspendable__Class.h>
#include <Modloader/app/structs/RigidbodySuspendable.h>

namespace app::classes::types {
    namespace RigidbodySuspendable {
        namespace {
            inline app::RigidbodySuspendable__Class* type_info_ref = nullptr;
        }
        inline app::RigidbodySuspendable__Class** type_info = &type_info_ref;
        inline app::RigidbodySuspendable__Class* get_class() {
            return il2cpp::get_class<app::RigidbodySuspendable__Class>(type_info, "", "RigidbodySuspendable");
        }
        inline app::RigidbodySuspendable* create() {
            return il2cpp::create_object<app::RigidbodySuspendable>(get_class());
        }
    } // namespace RigidbodySuspendable
} // namespace app::classes::types
