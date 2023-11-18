#pragma once
#include <Modloader/app/structs/IKMappingBone__Array.h>
#include <Modloader/app/structs/IKMappingBone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKMappingBone__Array {
        inline app::IKMappingBone__Array__Class** type_info() {
            static app::IKMappingBone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKMappingBone__Array__Class**)(modloader::win::memory::resolve_rva(0x0475C010));
            }
            return cache;
        }
        inline app::IKMappingBone__Array__Class* get_class() {
            return il2cpp::get_class<app::IKMappingBone__Array__Class>(type_info(), "RootMotion.FinalIK", "IKMappingBone[]");
        }
        inline app::IKMappingBone__Array* create() {
            return il2cpp::create_object<app::IKMappingBone__Array>(get_class());
        }
    } // namespace IKMappingBone__Array
} // namespace app::classes::types
