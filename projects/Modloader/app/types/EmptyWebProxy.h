#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EmptyWebProxy__Class.h>
#include <Modloader/app/structs/EmptyWebProxy.h>

namespace app::classes::types {
    namespace EmptyWebProxy {
        inline app::EmptyWebProxy__Class** type_info = (app::EmptyWebProxy__Class**)(modloader::win::memory::resolve_rva(0x047991B8));
        inline app::EmptyWebProxy__Class* get_class() {
            return il2cpp::get_class<app::EmptyWebProxy__Class>(type_info, "System.Net", "EmptyWebProxy");
        }
        inline app::EmptyWebProxy* create() {
            return il2cpp::create_object<app::EmptyWebProxy>(get_class());
        }
    } // namespace EmptyWebProxy
} // namespace app::classes::types
