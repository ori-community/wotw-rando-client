#pragma once
#include <Modloader/app/structs/CertUsage__Enum.h>
#include <Modloader/app/structs/CertUsage__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CertUsage__Enum {
        inline app::CertUsage__Enum__Class** type_info() {
            static app::CertUsage__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CertUsage__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CertUsage__Enum__Class* get_class() {
            return il2cpp::get_class<app::CertUsage__Enum__Class>(type_info(), "System.Net", "CertUsage");
        }
        inline app::CertUsage__Enum* create() {
            return il2cpp::create_object<app::CertUsage__Enum>(get_class());
        }
    } // namespace CertUsage__Enum
} // namespace app::classes::types
