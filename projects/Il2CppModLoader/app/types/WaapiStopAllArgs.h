#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaapiStopAllArgs {
        namespace {
            app::WaapiStopAllArgs__Class* type_info_ref = nullptr;
        }
        app::WaapiStopAllArgs__Class** type_info = &type_info_ref;
        inline app::WaapiStopAllArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiStopAllArgs__Class>(type_info, "", "WaapiStopAllArgs");
        }
        inline app::WaapiStopAllArgs* create() {
            return il2cpp::create_object<app::WaapiStopAllArgs>(get_class());
        }
    } // namespace WaapiStopAllArgs
} // namespace app::classes::types
