#pragma once
#include <Modloader/app/structs/COMException.h>
#include <Modloader/app/structs/COMException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace COMException {
        inline app::COMException__Class** type_info() {
            static app::COMException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::COMException__Class**)(modloader::win::memory::resolve_rva(0x04769FA0));
            }
            return cache;
        }
        inline app::COMException__Class* get_class() {
            return il2cpp::get_class<app::COMException__Class>(type_info(), "System.Runtime.InteropServices", "COMException");
        }
        inline app::COMException* create() {
            return il2cpp::create_object<app::COMException>(get_class());
        }
    } // namespace COMException
} // namespace app::classes::types
