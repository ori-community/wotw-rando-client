#pragma once
#include <Modloader/app/structs/NameValueSectionHandler.h>
#include <Modloader/app/structs/NameValueSectionHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameValueSectionHandler {
        inline app::NameValueSectionHandler__Class** type_info() {
            static app::NameValueSectionHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NameValueSectionHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NameValueSectionHandler__Class* get_class() {
            return il2cpp::get_class<app::NameValueSectionHandler__Class>(type_info(), "System.Configuration", "NameValueSectionHandler");
        }
        inline app::NameValueSectionHandler* create() {
            return il2cpp::create_object<app::NameValueSectionHandler>(get_class());
        }
    } // namespace NameValueSectionHandler
} // namespace app::classes::types
