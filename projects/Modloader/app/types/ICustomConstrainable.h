#pragma once
#include <Modloader/app/structs/ICustomConstrainable.h>
#include <Modloader/app/structs/ICustomConstrainable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICustomConstrainable {
        inline app::ICustomConstrainable__Class** type_info() {
            static app::ICustomConstrainable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICustomConstrainable__Class**)(modloader::win::memory::resolve_rva(0x047135D0));
            }
            return cache;
        }
        inline app::ICustomConstrainable__Class* get_class() {
            return il2cpp::get_class<app::ICustomConstrainable__Class>(type_info(), "Moon.Timeline", "ICustomConstrainable");
        }
    } // namespace ICustomConstrainable
} // namespace app::classes::types
