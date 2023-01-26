#pragma once
#include <Modloader/app/structs/WaapiJsonSetDefaultListenersArgs.h>
#include <Modloader/app/structs/WaapiJsonSetDefaultListenersArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonSetDefaultListenersArgs {
        inline app::WaapiJsonSetDefaultListenersArgs__Class** type_info() {
            static app::WaapiJsonSetDefaultListenersArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaapiJsonSetDefaultListenersArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaapiJsonSetDefaultListenersArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonSetDefaultListenersArgs__Class>(type_info(), "", "WaapiJsonSetDefaultListenersArgs");
        }
        inline app::WaapiJsonSetDefaultListenersArgs* create() {
            return il2cpp::create_object<app::WaapiJsonSetDefaultListenersArgs>(get_class());
        }
    } // namespace WaapiJsonSetDefaultListenersArgs
} // namespace app::classes::types
