#pragma once
#include <Modloader/app/structs/IKMappingLimb__Array.h>
#include <Modloader/app/structs/IKMappingLimb__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKMappingLimb__Array {
        inline app::IKMappingLimb__Array__Class** type_info() {
            static app::IKMappingLimb__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKMappingLimb__Array__Class**)(modloader::win::memory::resolve_rva(0x0478E6F8));
            }
            return cache;
        }
        inline app::IKMappingLimb__Array__Class* get_class() {
            return il2cpp::get_class<app::IKMappingLimb__Array__Class>(type_info(), "RootMotion.FinalIK", "IKMappingLimb[]");
        }
        inline app::IKMappingLimb__Array* create() {
            return il2cpp::create_object<app::IKMappingLimb__Array>(get_class());
        }
    } // namespace IKMappingLimb__Array
} // namespace app::classes::types
