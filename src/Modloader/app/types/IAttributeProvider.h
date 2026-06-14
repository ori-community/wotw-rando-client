#pragma once
#include <Modloader/app/structs/IAttributeProvider.h>
#include <Modloader/app/structs/IAttributeProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAttributeProvider {
        inline app::IAttributeProvider__Class** type_info() {
            static app::IAttributeProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IAttributeProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IAttributeProvider__Class* get_class() {
            return il2cpp::get_class<app::IAttributeProvider__Class>(type_info(), "Newtonsoft.Json.Serialization", "IAttributeProvider");
        }
    } // namespace IAttributeProvider
} // namespace app::classes::types
