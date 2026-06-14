#pragma once
#include <Modloader/app/structs/FtpCachePolicyElement.h>
#include <Modloader/app/structs/FtpCachePolicyElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FtpCachePolicyElement {
        inline app::FtpCachePolicyElement__Class** type_info() {
            static app::FtpCachePolicyElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FtpCachePolicyElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FtpCachePolicyElement__Class* get_class() {
            return il2cpp::get_class<app::FtpCachePolicyElement__Class>(type_info(), "System.Net.Configuration", "FtpCachePolicyElement");
        }
        inline app::FtpCachePolicyElement* create() {
            return il2cpp::create_object<app::FtpCachePolicyElement>(get_class());
        }
    } // namespace FtpCachePolicyElement
} // namespace app::classes::types
