#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DomainNameHelper__Class.h>
#include <Modloader/app/structs/DomainNameHelper.h>

namespace app::classes::types {
    namespace DomainNameHelper {
        namespace {
            inline app::DomainNameHelper__Class* type_info_ref = nullptr;
        }
        inline app::DomainNameHelper__Class** type_info = &type_info_ref;
        inline app::DomainNameHelper__Class* get_class() {
            return il2cpp::get_class<app::DomainNameHelper__Class>(type_info, "System", "DomainNameHelper");
        }
        inline app::DomainNameHelper* create() {
            return il2cpp::create_object<app::DomainNameHelper>(get_class());
        }
    } // namespace DomainNameHelper
} // namespace app::classes::types
