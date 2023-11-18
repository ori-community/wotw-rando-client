#pragma once
#include <Modloader/app/structs/WaapiJsonRegisterObjArgs.h>
#include <Modloader/app/structs/WaapiJsonRegisterObjArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonRegisterObjArgs {
        inline app::WaapiJsonRegisterObjArgs__Class** type_info() {
            static app::WaapiJsonRegisterObjArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaapiJsonRegisterObjArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaapiJsonRegisterObjArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonRegisterObjArgs__Class>(type_info(), "", "WaapiJsonRegisterObjArgs");
        }
        inline app::WaapiJsonRegisterObjArgs* create() {
            return il2cpp::create_object<app::WaapiJsonRegisterObjArgs>(get_class());
        }
    } // namespace WaapiJsonRegisterObjArgs
} // namespace app::classes::types
