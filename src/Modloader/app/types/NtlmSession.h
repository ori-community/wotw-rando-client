#pragma once
#include <Modloader/app/structs/NtlmSession.h>
#include <Modloader/app/structs/NtlmSession__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NtlmSession {
        inline app::NtlmSession__Class** type_info() {
            static app::NtlmSession__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NtlmSession__Class**)(modloader::win::memory::resolve_rva(0x0478E0C0));
            }
            return cache;
        }
        inline app::NtlmSession__Class* get_class() {
            return il2cpp::get_class<app::NtlmSession__Class>(type_info(), "Mono.Http", "NtlmSession");
        }
        inline app::NtlmSession* create() {
            return il2cpp::create_object<app::NtlmSession>(get_class());
        }
    } // namespace NtlmSession
} // namespace app::classes::types
