#pragma once
#include <Modloader/app/structs/MoonTrailSystem_ComputeBufferWrapper__Array.h>
#include <Modloader/app/structs/MoonTrailSystem_ComputeBufferWrapper__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrailSystem_ComputeBufferWrapper__Array {
        inline app::MoonTrailSystem_ComputeBufferWrapper__Array__Class** type_info() {
            static app::MoonTrailSystem_ComputeBufferWrapper__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTrailSystem_ComputeBufferWrapper__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTrailSystem_ComputeBufferWrapper__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailSystem_ComputeBufferWrapper__Array__Class>(type_info(), "Moon", "MoonTrailSystem+ComputeBufferWrapper[]");
        }
        inline app::MoonTrailSystem_ComputeBufferWrapper__Array* create() {
            return il2cpp::create_object<app::MoonTrailSystem_ComputeBufferWrapper__Array>(get_class());
        }
    } // namespace MoonTrailSystem_ComputeBufferWrapper__Array
} // namespace app::classes::types
