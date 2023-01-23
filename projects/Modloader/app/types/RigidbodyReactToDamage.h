#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RigidbodyReactToDamage__Class.h>
#include <Modloader/app/structs/RigidbodyReactToDamage.h>

namespace app::classes::types {
    namespace RigidbodyReactToDamage {
        namespace {
            inline app::RigidbodyReactToDamage__Class* type_info_ref = nullptr;
        }
        inline app::RigidbodyReactToDamage__Class** type_info = &type_info_ref;
        inline app::RigidbodyReactToDamage__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyReactToDamage__Class>(type_info, "", "RigidbodyReactToDamage");
        }
        inline app::RigidbodyReactToDamage* create() {
            return il2cpp::create_object<app::RigidbodyReactToDamage>(get_class());
        }
    } // namespace RigidbodyReactToDamage
} // namespace app::classes::types
