#pragma once
#include <Modloader/app/structs/fsAotConfiguration.h>
#include <Modloader/app/structs/fsAotConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsAotConfiguration {
        inline app::fsAotConfiguration__Class** type_info() {
            static app::fsAotConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsAotConfiguration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsAotConfiguration__Class* get_class() {
            return il2cpp::get_class<app::fsAotConfiguration__Class>(type_info(), "FullSerializer", "fsAotConfiguration");
        }
        inline app::fsAotConfiguration* create() {
            return il2cpp::create_object<app::fsAotConfiguration>(get_class());
        }
    } // namespace fsAotConfiguration
} // namespace app::classes::types
