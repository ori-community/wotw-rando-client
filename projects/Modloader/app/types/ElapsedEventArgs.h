#pragma once
#include <Modloader/app/structs/ElapsedEventArgs.h>
#include <Modloader/app/structs/ElapsedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ElapsedEventArgs {
        inline app::ElapsedEventArgs__Class** type_info() {
            static app::ElapsedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ElapsedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04759400));
            }
            return cache;
        }
        inline app::ElapsedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ElapsedEventArgs__Class>(type_info(), "System.Timers", "ElapsedEventArgs");
        }
        inline app::ElapsedEventArgs* create() {
            return il2cpp::create_object<app::ElapsedEventArgs>(get_class());
        }
    } // namespace ElapsedEventArgs
} // namespace app::classes::types
