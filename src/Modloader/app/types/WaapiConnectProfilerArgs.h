#pragma once
#include <Modloader/app/structs/WaapiConnectProfilerArgs.h>
#include <Modloader/app/structs/WaapiConnectProfilerArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaapiConnectProfilerArgs {
        inline app::WaapiConnectProfilerArgs__Class** type_info() {
            static app::WaapiConnectProfilerArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaapiConnectProfilerArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaapiConnectProfilerArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiConnectProfilerArgs__Class>(type_info(), "", "WaapiConnectProfilerArgs");
        }
        inline app::WaapiConnectProfilerArgs* create() {
            return il2cpp::create_object<app::WaapiConnectProfilerArgs>(get_class());
        }
    } // namespace WaapiConnectProfilerArgs
} // namespace app::classes::types
