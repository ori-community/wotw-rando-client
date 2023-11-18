#pragma once
#include <Modloader/app/structs/DisposerReplySink.h>
#include <Modloader/app/structs/DisposerReplySink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisposerReplySink {
        inline app::DisposerReplySink__Class** type_info() {
            static app::DisposerReplySink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DisposerReplySink__Class**)(modloader::win::memory::resolve_rva(0x047344D8));
            }
            return cache;
        }
        inline app::DisposerReplySink__Class* get_class() {
            return il2cpp::get_class<app::DisposerReplySink__Class>(type_info(), "System.Runtime.Remoting", "DisposerReplySink");
        }
        inline app::DisposerReplySink* create() {
            return il2cpp::create_object<app::DisposerReplySink>(get_class());
        }
    } // namespace DisposerReplySink
} // namespace app::classes::types
