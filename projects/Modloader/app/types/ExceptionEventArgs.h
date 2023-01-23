#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExceptionEventArgs__Class.h>
#include <Modloader/app/structs/ExceptionEventArgs.h>

namespace app::classes::types {
    namespace ExceptionEventArgs {
        inline app::ExceptionEventArgs__Class** type_info = (app::ExceptionEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0474C8A8));
        inline app::ExceptionEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ExceptionEventArgs__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ExceptionEventArgs");
        }
        inline app::ExceptionEventArgs* create() {
            return il2cpp::create_object<app::ExceptionEventArgs>(get_class());
        }
    } // namespace ExceptionEventArgs
} // namespace app::classes::types
