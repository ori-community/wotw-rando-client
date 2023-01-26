#pragma once
#include <Modloader/app/structs/SimpleAsyncResult.h>
#include <Modloader/app/structs/SimpleAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleAsyncResult {
        inline app::SimpleAsyncResult__Class** type_info() {
            static app::SimpleAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0471DA78));
            }
            return cache;
        }
        inline app::SimpleAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::SimpleAsyncResult__Class>(type_info(), "System.Net", "SimpleAsyncResult");
        }
        inline app::SimpleAsyncResult* create() {
            return il2cpp::create_object<app::SimpleAsyncResult>(get_class());
        }
    } // namespace SimpleAsyncResult
} // namespace app::classes::types
