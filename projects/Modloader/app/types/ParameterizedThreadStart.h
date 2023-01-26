#pragma once
#include <Modloader/app/structs/ParameterizedThreadStart.h>
#include <Modloader/app/structs/ParameterizedThreadStart__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParameterizedThreadStart {
        inline app::ParameterizedThreadStart__Class** type_info() {
            static app::ParameterizedThreadStart__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParameterizedThreadStart__Class**)(modloader::win::memory::resolve_rva(0x04731C98));
            }
            return cache;
        }
        inline app::ParameterizedThreadStart__Class* get_class() {
            return il2cpp::get_class<app::ParameterizedThreadStart__Class>(type_info(), "System.Threading", "ParameterizedThreadStart");
        }
        inline app::ParameterizedThreadStart* create() {
            return il2cpp::create_object<app::ParameterizedThreadStart>(get_class());
        }
    } // namespace ParameterizedThreadStart
} // namespace app::classes::types
