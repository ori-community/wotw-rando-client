#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpgradableProjectProperties__Array {
        namespace {
            inline app::UpgradableProjectProperties__Array__Class* type_info_ref = nullptr;
        }
        inline app::UpgradableProjectProperties__Array__Class** type_info = &type_info_ref;
        inline app::UpgradableProjectProperties__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradableProjectProperties__Array__Class>(type_info, "", "UpgradableProjectProperties[]");
        }
        inline app::UpgradableProjectProperties__Array* create() {
            return il2cpp::create_object<app::UpgradableProjectProperties__Array>(get_class());
        }
    } // namespace UpgradableProjectProperties__Array
} // namespace app::classes::types
