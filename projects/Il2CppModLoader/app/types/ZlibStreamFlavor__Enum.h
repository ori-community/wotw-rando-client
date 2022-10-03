#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZlibStreamFlavor__Enum {
        namespace {
            app::ZlibStreamFlavor__Enum__Class* type_info_ref = nullptr;
        }
        app::ZlibStreamFlavor__Enum__Class** type_info = &type_info_ref;
        inline app::ZlibStreamFlavor__Enum__Class* get_class() {
            return il2cpp::get_class<app::ZlibStreamFlavor__Enum__Class>(type_info, "Ionic.Zlib", "ZlibStreamFlavor");
        }
        inline app::ZlibStreamFlavor__Enum* create() {
            return il2cpp::create_object<app::ZlibStreamFlavor__Enum>(get_class());
        }
    } // namespace ZlibStreamFlavor__Enum
} // namespace app::classes::types
