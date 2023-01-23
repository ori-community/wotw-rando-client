#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AsyncProtocolResult__Class.h>
#include <Modloader/app/structs/AsyncProtocolResult.h>

namespace app::classes::types {
    namespace AsyncProtocolResult {
        inline app::AsyncProtocolResult__Class** type_info = (app::AsyncProtocolResult__Class**)(modloader::win::memory::resolve_rva(0x04748AA8));
        inline app::AsyncProtocolResult__Class* get_class() {
            return il2cpp::get_class<app::AsyncProtocolResult__Class>(type_info, "Mono.Net.Security", "AsyncProtocolResult");
        }
        inline app::AsyncProtocolResult* create() {
            return il2cpp::create_object<app::AsyncProtocolResult>(get_class());
        }
    } // namespace AsyncProtocolResult
} // namespace app::classes::types
