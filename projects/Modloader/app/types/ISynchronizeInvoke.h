#pragma once
#include <Modloader/app/structs/ISynchronizeInvoke.h>
#include <Modloader/app/structs/ISynchronizeInvoke__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISynchronizeInvoke {
        inline app::ISynchronizeInvoke__Class** type_info() {
            static app::ISynchronizeInvoke__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISynchronizeInvoke__Class**)(modloader::win::memory::resolve_rva(0x0477FF38));
            }
            return cache;
        }
        inline app::ISynchronizeInvoke__Class* get_class() {
            return il2cpp::get_class<app::ISynchronizeInvoke__Class>(type_info(), "System.ComponentModel", "ISynchronizeInvoke");
        }
    } // namespace ISynchronizeInvoke
} // namespace app::classes::types
