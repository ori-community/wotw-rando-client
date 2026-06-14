#pragma once
#include <Modloader/app/structs/NtlmClient.h>
#include <Modloader/app/structs/NtlmClient__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NtlmClient {
        inline app::NtlmClient__Class** type_info() {
            static app::NtlmClient__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NtlmClient__Class**)(modloader::win::memory::resolve_rva(0x047675C0));
            }
            return cache;
        }
        inline app::NtlmClient__Class* get_class() {
            return il2cpp::get_class<app::NtlmClient__Class>(type_info(), "Mono.Http", "NtlmClient");
        }
        inline app::NtlmClient* create() {
            return il2cpp::create_object<app::NtlmClient>(get_class());
        }
    } // namespace NtlmClient
} // namespace app::classes::types
