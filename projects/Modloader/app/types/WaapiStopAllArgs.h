#pragma once
#include <Modloader/app/structs/WaapiStopAllArgs.h>
#include <Modloader/app/structs/WaapiStopAllArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaapiStopAllArgs {
        inline app::WaapiStopAllArgs__Class** type_info() {
            static app::WaapiStopAllArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaapiStopAllArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaapiStopAllArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiStopAllArgs__Class>(type_info(), "", "WaapiStopAllArgs");
        }
        inline app::WaapiStopAllArgs* create() {
            return il2cpp::create_object<app::WaapiStopAllArgs>(get_class());
        }
    } // namespace WaapiStopAllArgs
} // namespace app::classes::types
