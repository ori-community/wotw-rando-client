#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonUnregisterObjArgs {
        namespace {
            app::WaapiJsonUnregisterObjArgs__Class* type_info_ref = nullptr;
        }
        app::WaapiJsonUnregisterObjArgs__Class** type_info = &type_info_ref;
        inline app::WaapiJsonUnregisterObjArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonUnregisterObjArgs__Class>(type_info, "", "WaapiJsonUnregisterObjArgs");
        }
        inline app::WaapiJsonUnregisterObjArgs* create() {
            return il2cpp::create_object<app::WaapiJsonUnregisterObjArgs>(get_class());
        }
    } // namespace WaapiJsonUnregisterObjArgs
} // namespace app::classes::types
