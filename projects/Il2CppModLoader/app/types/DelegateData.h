#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DelegateData {
        inline app::DelegateData__Class** type_info = (app::DelegateData__Class**)(modloader::win::memory::resolve_rva(0x04756AB0));
        inline app::DelegateData__Class* get_class() {
            return il2cpp::get_class<app::DelegateData__Class>(type_info, "System", "DelegateData");
        }
        inline app::DelegateData* create() {
            return il2cpp::create_object<app::DelegateData>(get_class());
        }
    } // namespace DelegateData
} // namespace app::classes::types
