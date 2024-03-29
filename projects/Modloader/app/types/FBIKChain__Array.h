#pragma once
#include <Modloader/app/structs/FBIKChain__Array.h>
#include <Modloader/app/structs/FBIKChain__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FBIKChain__Array {
        inline app::FBIKChain__Array__Class** type_info() {
            static app::FBIKChain__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FBIKChain__Array__Class**)(modloader::win::memory::resolve_rva(0x0472CFF0));
            }
            return cache;
        }
        inline app::FBIKChain__Array__Class* get_class() {
            return il2cpp::get_class<app::FBIKChain__Array__Class>(type_info(), "RootMotion.FinalIK", "FBIKChain[]");
        }
        inline app::FBIKChain__Array* create() {
            return il2cpp::create_object<app::FBIKChain__Array>(get_class());
        }
    } // namespace FBIKChain__Array
} // namespace app::classes::types
