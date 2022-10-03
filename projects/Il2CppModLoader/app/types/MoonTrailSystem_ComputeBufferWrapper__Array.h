#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTrailSystem_ComputeBufferWrapper__Array {
        namespace {
            app::MoonTrailSystem_ComputeBufferWrapper__Array__Class* type_info_ref = nullptr;
        }
        app::MoonTrailSystem_ComputeBufferWrapper__Array__Class** type_info = &type_info_ref;
        inline app::MoonTrailSystem_ComputeBufferWrapper__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailSystem_ComputeBufferWrapper__Array__Class>(type_info, "Moon", "MoonTrailSystem+ComputeBufferWrapper[]");
        }
        inline app::MoonTrailSystem_ComputeBufferWrapper__Array* create() {
            return il2cpp::create_object<app::MoonTrailSystem_ComputeBufferWrapper__Array>(get_class());
        }
    } // namespace MoonTrailSystem_ComputeBufferWrapper__Array
} // namespace app::classes::types
