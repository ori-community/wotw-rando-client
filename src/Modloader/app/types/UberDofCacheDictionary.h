#pragma once
#include <Modloader/app/structs/UberDofCacheDictionary.h>
#include <Modloader/app/structs/UberDofCacheDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberDofCacheDictionary {
        inline app::UberDofCacheDictionary__Class** type_info() {
            static app::UberDofCacheDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberDofCacheDictionary__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberDofCacheDictionary__Class* get_class() {
            return il2cpp::get_class<app::UberDofCacheDictionary__Class>(type_info(), "", "UberDofCacheDictionary");
        }
        inline app::UberDofCacheDictionary* create() {
            return il2cpp::create_object<app::UberDofCacheDictionary>(get_class());
        }
    } // namespace UberDofCacheDictionary
} // namespace app::classes::types
