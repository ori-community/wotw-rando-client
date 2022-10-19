#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FBIKChain {
        inline app::FBIKChain__Class** type_info = (app::FBIKChain__Class**)(modloader::win::memory::resolve_rva(0x047701F0));
        inline app::FBIKChain__Class* get_class() {
            return il2cpp::get_class<app::FBIKChain__Class>(type_info, "RootMotion.FinalIK", "FBIKChain");
        }
        inline app::FBIKChain* create() {
            return il2cpp::create_object<app::FBIKChain>(get_class());
        }
        inline app::FBIKChain__Array* create_array(int size) {
            return il2cpp::array_new<app::FBIKChain__Array>(get_class(), size);
        }
        inline app::FBIKChain__Array* create_array(const std::vector<app::FBIKChain*>& items) {
            return il2cpp::array_new<app::FBIKChain__Array>(get_class(), items);
        }
    } // namespace FBIKChain
} // namespace app::classes::types
