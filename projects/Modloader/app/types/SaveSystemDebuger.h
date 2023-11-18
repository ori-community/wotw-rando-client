#pragma once
#include <Modloader/app/structs/SaveSystemDebuger.h>
#include <Modloader/app/structs/SaveSystemDebuger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSystemDebuger {
        inline app::SaveSystemDebuger__Class** type_info() {
            static app::SaveSystemDebuger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SaveSystemDebuger__Class**)(modloader::win::memory::resolve_rva(0x04792F28));
            }
            return cache;
        }
        inline app::SaveSystemDebuger__Class* get_class() {
            return il2cpp::get_class<app::SaveSystemDebuger__Class>(type_info(), "", "SaveSystemDebuger");
        }
        inline app::SaveSystemDebuger* create() {
            return il2cpp::create_object<app::SaveSystemDebuger>(get_class());
        }
    } // namespace SaveSystemDebuger
} // namespace app::classes::types
