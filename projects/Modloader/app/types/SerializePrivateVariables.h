#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SerializePrivateVariables__Class.h>
#include <Modloader/app/structs/SerializePrivateVariables.h>

namespace app::classes::types {
    namespace SerializePrivateVariables {
        namespace {
            inline app::SerializePrivateVariables__Class* type_info_ref = nullptr;
        }
        inline app::SerializePrivateVariables__Class** type_info = &type_info_ref;
        inline app::SerializePrivateVariables__Class* get_class() {
            return il2cpp::get_class<app::SerializePrivateVariables__Class>(type_info, "UnityEngine", "SerializePrivateVariables");
        }
        inline app::SerializePrivateVariables* create() {
            return il2cpp::create_object<app::SerializePrivateVariables>(get_class());
        }
    } // namespace SerializePrivateVariables
} // namespace app::classes::types
