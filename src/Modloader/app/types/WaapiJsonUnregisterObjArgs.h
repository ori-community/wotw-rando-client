#pragma once
#include <Modloader/app/structs/WaapiJsonUnregisterObjArgs.h>
#include <Modloader/app/structs/WaapiJsonUnregisterObjArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonUnregisterObjArgs {
        inline app::WaapiJsonUnregisterObjArgs__Class** type_info() {
            static app::WaapiJsonUnregisterObjArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaapiJsonUnregisterObjArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaapiJsonUnregisterObjArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonUnregisterObjArgs__Class>(type_info(), "", "WaapiJsonUnregisterObjArgs");
        }
        inline app::WaapiJsonUnregisterObjArgs* create() {
            return il2cpp::create_object<app::WaapiJsonUnregisterObjArgs>(get_class());
        }
    } // namespace WaapiJsonUnregisterObjArgs
} // namespace app::classes::types
