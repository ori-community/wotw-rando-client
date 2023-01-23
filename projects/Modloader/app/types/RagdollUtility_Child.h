#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RagdollUtility_Child__Class.h>
#include <Modloader/app/structs/RagdollUtility_Child.h>
#include <Modloader/app/structs/RagdollUtility_Child__Array.h>

namespace app::classes::types {
    namespace RagdollUtility_Child {
        inline app::RagdollUtility_Child__Class** type_info = (app::RagdollUtility_Child__Class**)(modloader::win::memory::resolve_rva(0x04795C48));
        inline app::RagdollUtility_Child__Class* get_class() {
            return il2cpp::get_nested_class<app::RagdollUtility_Child__Class>(type_info, "RootMotion.FinalIK", "RagdollUtility", "Child");
        }
        inline app::RagdollUtility_Child* create() {
            return il2cpp::create_object<app::RagdollUtility_Child>(get_class());
        }
        inline app::RagdollUtility_Child__Array* create_array(int size) {
            return il2cpp::array_new<app::RagdollUtility_Child__Array>(get_class(), size);
        }
        inline app::RagdollUtility_Child__Array* create_array(const std::vector<app::RagdollUtility_Child*>& items) {
            return il2cpp::array_new<app::RagdollUtility_Child__Array>(get_class(), items);
        }
    } // namespace RagdollUtility_Child
} // namespace app::classes::types
