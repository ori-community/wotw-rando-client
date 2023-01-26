#pragma once
#include <Modloader/app/structs/IWebRequestCreate.h>
#include <Modloader/app/structs/IWebRequestCreate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IWebRequestCreate {
        inline app::IWebRequestCreate__Class** type_info() {
            static app::IWebRequestCreate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IWebRequestCreate__Class**)(modloader::win::memory::resolve_rva(0x0473AC28));
            }
            return cache;
        }
        inline app::IWebRequestCreate__Class* get_class() {
            return il2cpp::get_class<app::IWebRequestCreate__Class>(type_info(), "System.Net", "IWebRequestCreate");
        }
    } // namespace IWebRequestCreate
} // namespace app::classes::types
