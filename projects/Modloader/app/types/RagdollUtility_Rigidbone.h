#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RagdollUtility_Rigidbone {
        inline app::RagdollUtility_Rigidbone__Class** type_info = (app::RagdollUtility_Rigidbone__Class**)(modloader::win::memory::resolve_rva(0x04707790));
        inline app::RagdollUtility_Rigidbone__Class* get_class() {
            return il2cpp::get_nested_class<app::RagdollUtility_Rigidbone__Class>(type_info, "RootMotion.FinalIK", "RagdollUtility", "Rigidbone");
        }
        inline app::RagdollUtility_Rigidbone* create() {
            return il2cpp::create_object<app::RagdollUtility_Rigidbone>(get_class());
        }
        inline app::RagdollUtility_Rigidbone__Array* create_array(int size) {
            return il2cpp::array_new<app::RagdollUtility_Rigidbone__Array>(get_class(), size);
        }
        inline app::RagdollUtility_Rigidbone__Array* create_array(const std::vector<app::RagdollUtility_Rigidbone*>& items) {
            return il2cpp::array_new<app::RagdollUtility_Rigidbone__Array>(get_class(), items);
        }
    } // namespace RagdollUtility_Rigidbone
} // namespace app::classes::types
