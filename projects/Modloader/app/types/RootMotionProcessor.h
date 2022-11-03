#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RootMotionProcessor {
        inline app::RootMotionProcessor__Class** type_info = (app::RootMotionProcessor__Class**)(modloader::win::memory::resolve_rva(0x047111A8));
        inline app::RootMotionProcessor__Class* get_class() {
            return il2cpp::get_class<app::RootMotionProcessor__Class>(type_info, "", "RootMotionProcessor");
        }
        inline app::RootMotionProcessor* create() {
            return il2cpp::create_object<app::RootMotionProcessor>(get_class());
        }
        inline app::RootMotionProcessor__Array* create_array(int size) {
            return il2cpp::array_new<app::RootMotionProcessor__Array>(get_class(), size);
        }
        inline app::RootMotionProcessor__Array* create_array(const std::vector<app::RootMotionProcessor*>& items) {
            return il2cpp::array_new<app::RootMotionProcessor__Array>(get_class(), items);
        }
    } // namespace RootMotionProcessor
} // namespace app::classes::types
