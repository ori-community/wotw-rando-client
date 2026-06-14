#pragma once
#include <Modloader/app/structs/IAlignable.h>
#include <Modloader/app/structs/IAlignable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAlignable {
        inline app::IAlignable__Class** type_info() {
            static app::IAlignable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAlignable__Class**)(modloader::win::memory::resolve_rva(0x047288E8));
            }
            return cache;
        }
        inline app::IAlignable__Class* get_class() {
            return il2cpp::get_class<app::IAlignable__Class>(type_info(), "", "IAlignable");
        }
    } // namespace IAlignable
} // namespace app::classes::types
