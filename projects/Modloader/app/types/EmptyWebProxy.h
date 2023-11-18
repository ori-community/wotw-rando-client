#pragma once
#include <Modloader/app/structs/EmptyWebProxy.h>
#include <Modloader/app/structs/EmptyWebProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmptyWebProxy {
        inline app::EmptyWebProxy__Class** type_info() {
            static app::EmptyWebProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EmptyWebProxy__Class**)(modloader::win::memory::resolve_rva(0x047991B8));
            }
            return cache;
        }
        inline app::EmptyWebProxy__Class* get_class() {
            return il2cpp::get_class<app::EmptyWebProxy__Class>(type_info(), "System.Net", "EmptyWebProxy");
        }
        inline app::EmptyWebProxy* create() {
            return il2cpp::create_object<app::EmptyWebProxy>(get_class());
        }
    } // namespace EmptyWebProxy
} // namespace app::classes::types
