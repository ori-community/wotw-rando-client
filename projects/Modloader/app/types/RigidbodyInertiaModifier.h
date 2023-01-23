#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RigidbodyInertiaModifier__Class.h>
#include <Modloader/app/structs/RigidbodyInertiaModifier.h>

namespace app::classes::types {
    namespace RigidbodyInertiaModifier {
        namespace {
            inline app::RigidbodyInertiaModifier__Class* type_info_ref = nullptr;
        }
        inline app::RigidbodyInertiaModifier__Class** type_info = &type_info_ref;
        inline app::RigidbodyInertiaModifier__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyInertiaModifier__Class>(type_info, "", "RigidbodyInertiaModifier");
        }
        inline app::RigidbodyInertiaModifier* create() {
            return il2cpp::create_object<app::RigidbodyInertiaModifier>(get_class());
        }
    } // namespace RigidbodyInertiaModifier
} // namespace app::classes::types
