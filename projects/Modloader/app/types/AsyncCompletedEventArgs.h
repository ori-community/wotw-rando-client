#pragma once
#include <Modloader/app/structs/AsyncCompletedEventArgs.h>
#include <Modloader/app/structs/AsyncCompletedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncCompletedEventArgs {
        inline app::AsyncCompletedEventArgs__Class** type_info() {
            static app::AsyncCompletedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsyncCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04729C90));
            }
            return cache;
        }
        inline app::AsyncCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::AsyncCompletedEventArgs__Class>(type_info(), "System.ComponentModel", "AsyncCompletedEventArgs");
        }
        inline app::AsyncCompletedEventArgs* create() {
            return il2cpp::create_object<app::AsyncCompletedEventArgs>(get_class());
        }
    } // namespace AsyncCompletedEventArgs
} // namespace app::classes::types
