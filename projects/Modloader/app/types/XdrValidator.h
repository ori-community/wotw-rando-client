#pragma once
#include <Modloader/app/structs/XdrValidator.h>
#include <Modloader/app/structs/XdrValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XdrValidator {
        inline app::XdrValidator__Class** type_info() {
            static app::XdrValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XdrValidator__Class**)(modloader::win::memory::resolve_rva(0x0473BDF0));
            }
            return cache;
        }
        inline app::XdrValidator__Class* get_class() {
            return il2cpp::get_class<app::XdrValidator__Class>(type_info(), "System.Xml.Schema", "XdrValidator");
        }
        inline app::XdrValidator* create() {
            return il2cpp::create_object<app::XdrValidator>(get_class());
        }
    } // namespace XdrValidator
} // namespace app::classes::types
