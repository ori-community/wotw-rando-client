#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonRegisterObjArgs {
        namespace {
            app::WaapiJsonRegisterObjArgs__Class* type_info_ref = nullptr;
        }
        app::WaapiJsonRegisterObjArgs__Class** type_info = &type_info_ref;
        inline app::WaapiJsonRegisterObjArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonRegisterObjArgs__Class>(type_info, "", "WaapiJsonRegisterObjArgs");
        }
        inline app::WaapiJsonRegisterObjArgs* create() {
            return il2cpp::create_object<app::WaapiJsonRegisterObjArgs>(get_class());
        }
    } // namespace WaapiJsonRegisterObjArgs
} // namespace app::classes::types
