#pragma once
#include <Modloader/app/structs/ListChangedEventArgs.h>
#include <Modloader/app/structs/ListChangedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListChangedEventArgs {
        inline app::ListChangedEventArgs__Class** type_info() {
            static app::ListChangedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04705330));
            }
            return cache;
        }
        inline app::ListChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ListChangedEventArgs__Class>(type_info(), "System.ComponentModel", "ListChangedEventArgs");
        }
        inline app::ListChangedEventArgs* create() {
            return il2cpp::create_object<app::ListChangedEventArgs>(get_class());
        }
    } // namespace ListChangedEventArgs
} // namespace app::classes::types
