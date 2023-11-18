#pragma once
#include <Modloader/app/structs/IKMappingSpine.h>
#include <Modloader/app/structs/IKMappingSpine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKMappingSpine {
        inline app::IKMappingSpine__Class** type_info() {
            static app::IKMappingSpine__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKMappingSpine__Class**)(modloader::win::memory::resolve_rva(0x04713C00));
            }
            return cache;
        }
        inline app::IKMappingSpine__Class* get_class() {
            return il2cpp::get_class<app::IKMappingSpine__Class>(type_info(), "RootMotion.FinalIK", "IKMappingSpine");
        }
        inline app::IKMappingSpine* create() {
            return il2cpp::create_object<app::IKMappingSpine>(get_class());
        }
    } // namespace IKMappingSpine
} // namespace app::classes::types
