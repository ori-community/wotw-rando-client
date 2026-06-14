#pragma once
#include <Modloader/app/structs/FABRIKChain__Array.h>
#include <Modloader/app/structs/FABRIKChain__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FABRIKChain__Array {
        inline app::FABRIKChain__Array__Class** type_info() {
            static app::FABRIKChain__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FABRIKChain__Array__Class**)(modloader::win::memory::resolve_rva(0x04729BC8));
            }
            return cache;
        }
        inline app::FABRIKChain__Array__Class* get_class() {
            return il2cpp::get_class<app::FABRIKChain__Array__Class>(type_info(), "RootMotion.FinalIK", "FABRIKChain[]");
        }
        inline app::FABRIKChain__Array* create() {
            return il2cpp::create_object<app::FABRIKChain__Array>(get_class());
        }
    } // namespace FABRIKChain__Array
} // namespace app::classes::types
