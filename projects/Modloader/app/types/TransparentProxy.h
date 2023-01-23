#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransparentProxy__Class.h>
#include <Modloader/app/structs/TransparentProxy.h>

namespace app::classes::types {
    namespace TransparentProxy {
        inline app::TransparentProxy__Class** type_info = (app::TransparentProxy__Class**)(modloader::win::memory::resolve_rva(0x0474E800));
        inline app::TransparentProxy__Class* get_class() {
            return il2cpp::get_class<app::TransparentProxy__Class>(type_info, "System.Runtime.Remoting.Proxies", "TransparentProxy");
        }
        inline app::TransparentProxy* create() {
            return il2cpp::create_object<app::TransparentProxy>(get_class());
        }
    } // namespace TransparentProxy
} // namespace app::classes::types
