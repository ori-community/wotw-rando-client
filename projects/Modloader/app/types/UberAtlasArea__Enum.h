#pragma once
#include <Modloader/app/structs/UberAtlasArea__Enum.h>
#include <Modloader/app/structs/UberAtlasArea__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberAtlasArea__Enum {
        inline app::UberAtlasArea__Enum__Class** type_info() {
            static app::UberAtlasArea__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberAtlasArea__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberAtlasArea__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasArea__Enum__Class>(type_info(), "", "UberAtlasArea");
        }
        inline app::UberAtlasArea__Enum* create() {
            return il2cpp::create_object<app::UberAtlasArea__Enum>(get_class());
        }
    } // namespace UberAtlasArea__Enum
} // namespace app::classes::types
