#pragma once
#include <Modloader/app/structs/UberUIPostProcess.h>
#include <Modloader/app/structs/UberUIPostProcess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberUIPostProcess {
        inline app::UberUIPostProcess__Class** type_info() {
            static app::UberUIPostProcess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberUIPostProcess__Class**)(modloader::win::memory::resolve_rva(0x04766868));
            }
            return cache;
        }
        inline app::UberUIPostProcess__Class* get_class() {
            return il2cpp::get_class<app::UberUIPostProcess__Class>(type_info(), "", "UberUIPostProcess");
        }
        inline app::UberUIPostProcess* create() {
            return il2cpp::create_object<app::UberUIPostProcess>(get_class());
        }
    } // namespace UberUIPostProcess
} // namespace app::classes::types
