#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlockableLaser_ActivationTimeslicer {
        inline app::BlockableLaser_ActivationTimeslicer__Class** type_info = (app::BlockableLaser_ActivationTimeslicer__Class**)(modloader::win::memory::resolve_rva(0x04764EC0));
        inline app::BlockableLaser_ActivationTimeslicer__Class* get_class() {
            return il2cpp::get_nested_class<app::BlockableLaser_ActivationTimeslicer__Class>(type_info, "", "BlockableLaser", "ActivationTimeslicer");
        }
        inline app::BlockableLaser_ActivationTimeslicer* create() {
            return il2cpp::create_object<app::BlockableLaser_ActivationTimeslicer>(get_class());
        }
    } // namespace BlockableLaser_ActivationTimeslicer
} // namespace app::classes::types
