#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaapiJsonRegisterObjArgs {
        namespace {
            inline app::WaapiJsonRegisterObjArgs__Class* type_info_ref = nullptr;
        }
        inline app::WaapiJsonRegisterObjArgs__Class** type_info = &type_info_ref;
        inline app::WaapiJsonRegisterObjArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonRegisterObjArgs__Class>(type_info, "", "WaapiJsonRegisterObjArgs");
        }
        inline app::WaapiJsonRegisterObjArgs* create() {
            return il2cpp::create_object<app::WaapiJsonRegisterObjArgs>(get_class());
        }
    } // namespace WaapiJsonRegisterObjArgs
} // namespace app::classes::types
