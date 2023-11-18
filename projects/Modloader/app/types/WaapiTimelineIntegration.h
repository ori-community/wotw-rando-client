#pragma once
#include <Modloader/app/structs/WaapiTimelineIntegration.h>
#include <Modloader/app/structs/WaapiTimelineIntegration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaapiTimelineIntegration {
        inline app::WaapiTimelineIntegration__Class** type_info() {
            static app::WaapiTimelineIntegration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaapiTimelineIntegration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaapiTimelineIntegration__Class* get_class() {
            return il2cpp::get_class<app::WaapiTimelineIntegration__Class>(type_info(), "", "WaapiTimelineIntegration");
        }
        inline app::WaapiTimelineIntegration* create() {
            return il2cpp::create_object<app::WaapiTimelineIntegration>(get_class());
        }
    } // namespace WaapiTimelineIntegration
} // namespace app::classes::types
