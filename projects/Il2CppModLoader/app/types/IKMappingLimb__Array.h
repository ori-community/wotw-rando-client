#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKMappingLimb__Array {
        inline app::IKMappingLimb__Array__Class** type_info = (app::IKMappingLimb__Array__Class**)(modloader::win::memory::resolve_rva(0x0478E6F8));
        inline app::IKMappingLimb__Array__Class* get_class() {
            return il2cpp::get_class<app::IKMappingLimb__Array__Class>(type_info, "RootMotion.FinalIK", "IKMappingLimb[]");
        }
        inline app::IKMappingLimb__Array* create() {
            return il2cpp::create_object<app::IKMappingLimb__Array>(get_class());
        }
    } // namespace IKMappingLimb__Array
} // namespace app::classes::types
