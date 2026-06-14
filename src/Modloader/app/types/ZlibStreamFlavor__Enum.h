#pragma once
#include <Modloader/app/structs/ZlibStreamFlavor__Enum.h>
#include <Modloader/app/structs/ZlibStreamFlavor__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZlibStreamFlavor__Enum {
        inline app::ZlibStreamFlavor__Enum__Class** type_info() {
            static app::ZlibStreamFlavor__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZlibStreamFlavor__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZlibStreamFlavor__Enum__Class* get_class() {
            return il2cpp::get_class<app::ZlibStreamFlavor__Enum__Class>(type_info(), "Ionic.Zlib", "ZlibStreamFlavor");
        }
        inline app::ZlibStreamFlavor__Enum* create() {
            return il2cpp::create_object<app::ZlibStreamFlavor__Enum>(get_class());
        }
    } // namespace ZlibStreamFlavor__Enum
} // namespace app::classes::types
