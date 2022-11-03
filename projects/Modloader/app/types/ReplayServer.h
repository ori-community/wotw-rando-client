#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReplayServer {
        inline app::ReplayServer__Class** type_info = (app::ReplayServer__Class**)(modloader::win::memory::resolve_rva(0x04709340));
        inline app::ReplayServer__Class* get_class() {
            return il2cpp::get_class<app::ReplayServer__Class>(type_info, "", "ReplayServer");
        }
        inline app::ReplayServer* create() {
            return il2cpp::create_object<app::ReplayServer>(get_class());
        }
    } // namespace ReplayServer
} // namespace app::classes::types
