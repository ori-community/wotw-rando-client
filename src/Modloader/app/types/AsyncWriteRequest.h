#pragma once
#include <Modloader/app/structs/AsyncWriteRequest.h>
#include <Modloader/app/structs/AsyncWriteRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncWriteRequest {
        inline app::AsyncWriteRequest__Class** type_info() {
            static app::AsyncWriteRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsyncWriteRequest__Class**)(modloader::win::memory::resolve_rva(0x0476FA98));
            }
            return cache;
        }
        inline app::AsyncWriteRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncWriteRequest__Class>(type_info(), "Mono.Net.Security", "AsyncWriteRequest");
        }
        inline app::AsyncWriteRequest* create() {
            return il2cpp::create_object<app::AsyncWriteRequest>(get_class());
        }
    } // namespace AsyncWriteRequest
} // namespace app::classes::types
