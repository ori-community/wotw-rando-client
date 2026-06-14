#pragma once
#include <Modloader/app/structs/AutoValidator.h>
#include <Modloader/app/structs/AutoValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutoValidator {
        inline app::AutoValidator__Class** type_info() {
            static app::AutoValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AutoValidator__Class**)(modloader::win::memory::resolve_rva(0x04717500));
            }
            return cache;
        }
        inline app::AutoValidator__Class* get_class() {
            return il2cpp::get_class<app::AutoValidator__Class>(type_info(), "System.Xml.Schema", "AutoValidator");
        }
        inline app::AutoValidator* create() {
            return il2cpp::create_object<app::AutoValidator>(get_class());
        }
    } // namespace AutoValidator
} // namespace app::classes::types
