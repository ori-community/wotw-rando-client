#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IKMappingLimb__Class.h>
#include <Modloader/app/structs/IKMappingLimb.h>
#include <Modloader/app/structs/IKMappingLimb__Array.h>

namespace app::classes::types {
    namespace IKMappingLimb {
        inline app::IKMappingLimb__Class** type_info = (app::IKMappingLimb__Class**)(modloader::win::memory::resolve_rva(0x0472F378));
        inline app::IKMappingLimb__Class* get_class() {
            return il2cpp::get_class<app::IKMappingLimb__Class>(type_info, "RootMotion.FinalIK", "IKMappingLimb");
        }
        inline app::IKMappingLimb* create() {
            return il2cpp::create_object<app::IKMappingLimb>(get_class());
        }
        inline app::IKMappingLimb__Array* create_array(int size) {
            return il2cpp::array_new<app::IKMappingLimb__Array>(get_class(), size);
        }
        inline app::IKMappingLimb__Array* create_array(const std::vector<app::IKMappingLimb*>& items) {
            return il2cpp::array_new<app::IKMappingLimb__Array>(get_class(), items);
        }
    } // namespace IKMappingLimb
} // namespace app::classes::types
