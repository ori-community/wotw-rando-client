#pragma once
#include <Modloader/app/structs/NameValueFileSectionHandler.h>
#include <Modloader/app/structs/NameValueFileSectionHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameValueFileSectionHandler {
        inline app::NameValueFileSectionHandler__Class** type_info() {
            static app::NameValueFileSectionHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NameValueFileSectionHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NameValueFileSectionHandler__Class* get_class() {
            return il2cpp::get_class<app::NameValueFileSectionHandler__Class>(type_info(), "System.Configuration", "NameValueFileSectionHandler");
        }
        inline app::NameValueFileSectionHandler* create() {
            return il2cpp::create_object<app::NameValueFileSectionHandler>(get_class());
        }
    } // namespace NameValueFileSectionHandler
} // namespace app::classes::types
