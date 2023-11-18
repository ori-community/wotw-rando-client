#pragma once
#include <Modloader/app/structs/HWStack.h>
#include <Modloader/app/structs/HWStack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HWStack {
        inline app::HWStack__Class** type_info() {
            static app::HWStack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HWStack__Class**)(modloader::win::memory::resolve_rva(0x04785BD0));
            }
            return cache;
        }
        inline app::HWStack__Class* get_class() {
            return il2cpp::get_class<app::HWStack__Class>(type_info(), "System.Xml", "HWStack");
        }
        inline app::HWStack* create() {
            return il2cpp::create_object<app::HWStack>(get_class());
        }
    } // namespace HWStack
} // namespace app::classes::types
