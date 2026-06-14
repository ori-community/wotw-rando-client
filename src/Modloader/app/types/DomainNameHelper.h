#pragma once
#include <Modloader/app/structs/DomainNameHelper.h>
#include <Modloader/app/structs/DomainNameHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DomainNameHelper {
        inline app::DomainNameHelper__Class** type_info() {
            static app::DomainNameHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DomainNameHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DomainNameHelper__Class* get_class() {
            return il2cpp::get_class<app::DomainNameHelper__Class>(type_info(), "System", "DomainNameHelper");
        }
        inline app::DomainNameHelper* create() {
            return il2cpp::create_object<app::DomainNameHelper>(get_class());
        }
    } // namespace DomainNameHelper
} // namespace app::classes::types
