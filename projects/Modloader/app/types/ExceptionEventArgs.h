#pragma once
#include <Modloader/app/structs/ExceptionEventArgs.h>
#include <Modloader/app/structs/ExceptionEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionEventArgs {
        inline app::ExceptionEventArgs__Class** type_info() {
            static app::ExceptionEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExceptionEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0474C8A8));
            }
            return cache;
        }
        inline app::ExceptionEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ExceptionEventArgs__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "ExceptionEventArgs");
        }
        inline app::ExceptionEventArgs* create() {
            return il2cpp::create_object<app::ExceptionEventArgs>(get_class());
        }
    } // namespace ExceptionEventArgs
} // namespace app::classes::types
