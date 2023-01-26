#pragma once
#include <Modloader/app/structs/WebHeaderCollectionType__Enum.h>
#include <Modloader/app/structs/WebHeaderCollectionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebHeaderCollectionType__Enum {
        inline app::WebHeaderCollectionType__Enum__Class** type_info() {
            static app::WebHeaderCollectionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebHeaderCollectionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebHeaderCollectionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebHeaderCollectionType__Enum__Class>(type_info(), "System.Net", "WebHeaderCollectionType");
        }
        inline app::WebHeaderCollectionType__Enum* create() {
            return il2cpp::create_object<app::WebHeaderCollectionType__Enum>(get_class());
        }
    } // namespace WebHeaderCollectionType__Enum
} // namespace app::classes::types
