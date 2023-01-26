#pragma once
#include <Modloader/app/structs/MetadataPropertyHandling__Enum.h>
#include <Modloader/app/structs/MetadataPropertyHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MetadataPropertyHandling__Enum {
        inline app::MetadataPropertyHandling__Enum__Class** type_info() {
            static app::MetadataPropertyHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MetadataPropertyHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MetadataPropertyHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::MetadataPropertyHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "MetadataPropertyHandling");
        }
        inline app::MetadataPropertyHandling__Enum* create() {
            return il2cpp::create_object<app::MetadataPropertyHandling__Enum>(get_class());
        }
    } // namespace MetadataPropertyHandling__Enum
} // namespace app::classes::types
