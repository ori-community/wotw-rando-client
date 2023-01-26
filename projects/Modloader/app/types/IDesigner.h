#pragma once
#include <Modloader/app/structs/IDesigner.h>
#include <Modloader/app/structs/IDesigner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDesigner {
        inline app::IDesigner__Class** type_info() {
            static app::IDesigner__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDesigner__Class**)(modloader::win::memory::resolve_rva(0x04790418));
            }
            return cache;
        }
        inline app::IDesigner__Class* get_class() {
            return il2cpp::get_class<app::IDesigner__Class>(type_info(), "System.ComponentModel.Design", "IDesigner");
        }
    } // namespace IDesigner
} // namespace app::classes::types
