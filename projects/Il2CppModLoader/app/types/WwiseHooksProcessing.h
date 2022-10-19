#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseHooksProcessing {
        inline app::WwiseHooksProcessing__Class** type_info = (app::WwiseHooksProcessing__Class**)(modloader::win::memory::resolve_rva(0x0478AB18));
        inline app::WwiseHooksProcessing__Class* get_class() {
            return il2cpp::get_class<app::WwiseHooksProcessing__Class>(type_info, "", "WwiseHooksProcessing");
        }
        inline app::WwiseHooksProcessing* create() {
            return il2cpp::create_object<app::WwiseHooksProcessing>(get_class());
        }
    } // namespace WwiseHooksProcessing
} // namespace app::classes::types
