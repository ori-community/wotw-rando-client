#pragma once
#include <Modloader/app/structs/CompletionDelegate.h>
#include <Modloader/app/structs/CompletionDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompletionDelegate {
        inline app::CompletionDelegate__Class** type_info() {
            static app::CompletionDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompletionDelegate__Class**)(modloader::win::memory::resolve_rva(0x04718BF0));
            }
            return cache;
        }
        inline app::CompletionDelegate__Class* get_class() {
            return il2cpp::get_class<app::CompletionDelegate__Class>(type_info(), "System.Net", "CompletionDelegate");
        }
        inline app::CompletionDelegate* create() {
            return il2cpp::create_object<app::CompletionDelegate>(get_class());
        }
    } // namespace CompletionDelegate
} // namespace app::classes::types
