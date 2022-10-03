#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseHooksProcessing {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseHooksProcessing__Class** type_info;
        inline app::WwiseHooksProcessing__Class* get_class() {
            return il2cpp::get_class<app::WwiseHooksProcessing__Class>(type_info, "", "WwiseHooksProcessing");
        }
        inline app::WwiseHooksProcessing* create() {
            return il2cpp::create_object<app::WwiseHooksProcessing>(get_class());
        }
    } // namespace WwiseHooksProcessing
} // namespace app::classes::types
