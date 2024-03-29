#pragma once
#include <Modloader/app/structs/MoonTrailSystem_ComputeBufferWrapper.h>
#include <Modloader/app/structs/MoonTrailSystem_ComputeBufferWrapper__Array.h>
#include <Modloader/app/structs/MoonTrailSystem_ComputeBufferWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrailSystem_ComputeBufferWrapper {
        inline app::MoonTrailSystem_ComputeBufferWrapper__Class** type_info() {
            static app::MoonTrailSystem_ComputeBufferWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTrailSystem_ComputeBufferWrapper__Class**)(modloader::win::memory::resolve_rva(0x0477A2A8));
            }
            return cache;
        }
        inline app::MoonTrailSystem_ComputeBufferWrapper__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTrailSystem_ComputeBufferWrapper__Class>(type_info(), "Moon", "MoonTrailSystem", "ComputeBufferWrapper");
        }
        inline app::MoonTrailSystem_ComputeBufferWrapper* create() {
            return il2cpp::create_object<app::MoonTrailSystem_ComputeBufferWrapper>(get_class());
        }
        inline app::MoonTrailSystem_ComputeBufferWrapper__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTrailSystem_ComputeBufferWrapper__Array>(get_class(), size);
        }
        inline app::MoonTrailSystem_ComputeBufferWrapper__Array* create_array(const std::vector<app::MoonTrailSystem_ComputeBufferWrapper*>& items) {
            return il2cpp::array_new<app::MoonTrailSystem_ComputeBufferWrapper__Array>(get_class(), items);
        }
    } // namespace MoonTrailSystem_ComputeBufferWrapper
} // namespace app::classes::types
