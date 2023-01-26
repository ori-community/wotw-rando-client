#pragma once
#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/Context__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Context {
        inline app::Context__Class** type_info() {
            static app::Context__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Context__Class**)(modloader::win::memory::resolve_rva(0x047499D0));
            }
            return cache;
        }
        inline app::Context__Class* get_class() {
            return il2cpp::get_class<app::Context__Class>(type_info(), "System.Runtime.Remoting.Contexts", "Context");
        }
        inline app::Context* create() {
            return il2cpp::create_object<app::Context>(get_class());
        }
    } // namespace Context
} // namespace app::classes::types
