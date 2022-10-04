#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IWaitContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IWaitContext__Class** type_info;
        inline app::IWaitContext__Class* get_class() {
            return il2cpp::get_class<app::IWaitContext__Class>(type_info, "Moon.Timeline", "IWaitContext");
        }
        inline app::IWaitContext* create() {
            return il2cpp::create_object<app::IWaitContext>(get_class());
        }
    } // namespace IWaitContext
} // namespace app::classes::types
