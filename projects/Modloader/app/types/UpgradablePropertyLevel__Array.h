#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UpgradablePropertyLevel__Array__Class.h>
#include <Modloader/app/structs/UpgradablePropertyLevel__Array.h>

namespace app::classes::types {
    namespace UpgradablePropertyLevel__Array {
        namespace {
            inline app::UpgradablePropertyLevel__Array__Class* type_info_ref = nullptr;
        }
        inline app::UpgradablePropertyLevel__Array__Class** type_info = &type_info_ref;
        inline app::UpgradablePropertyLevel__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradablePropertyLevel__Array__Class>(type_info, "", "UpgradablePropertyLevel[]");
        }
        inline app::UpgradablePropertyLevel__Array* create() {
            return il2cpp::create_object<app::UpgradablePropertyLevel__Array>(get_class());
        }
    } // namespace UpgradablePropertyLevel__Array
} // namespace app::classes::types
