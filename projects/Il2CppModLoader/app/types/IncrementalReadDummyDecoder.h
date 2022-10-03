#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IncrementalReadDummyDecoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IncrementalReadDummyDecoder__Class** type_info;
        inline app::IncrementalReadDummyDecoder__Class* get_class() {
            return il2cpp::get_class<app::IncrementalReadDummyDecoder__Class>(type_info, "System.Xml", "IncrementalReadDummyDecoder");
        }
        inline app::IncrementalReadDummyDecoder* create() {
            return il2cpp::create_object<app::IncrementalReadDummyDecoder>(get_class());
        }
    } // namespace IncrementalReadDummyDecoder
} // namespace app::classes::types
