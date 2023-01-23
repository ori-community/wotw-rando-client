#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberDofCacheDictionary__Class.h>
#include <Modloader/app/structs/UberDofCacheDictionary.h>

namespace app::classes::types {
    namespace UberDofCacheDictionary {
        namespace {
            inline app::UberDofCacheDictionary__Class* type_info_ref = nullptr;
        }
        inline app::UberDofCacheDictionary__Class** type_info = &type_info_ref;
        inline app::UberDofCacheDictionary__Class* get_class() {
            return il2cpp::get_class<app::UberDofCacheDictionary__Class>(type_info, "", "UberDofCacheDictionary");
        }
        inline app::UberDofCacheDictionary* create() {
            return il2cpp::create_object<app::UberDofCacheDictionary>(get_class());
        }
    } // namespace UberDofCacheDictionary
} // namespace app::classes::types
