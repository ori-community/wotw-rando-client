#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReaderPositionInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReaderPositionInfo__Class** type_info;
        inline app::ReaderPositionInfo__Class* get_class() {
            return il2cpp::get_class<app::ReaderPositionInfo__Class>(type_info, "System.Xml", "ReaderPositionInfo");
        }
        inline app::ReaderPositionInfo* create() {
            return il2cpp::create_object<app::ReaderPositionInfo>(get_class());
        }
    } // namespace ReaderPositionInfo
} // namespace app::classes::types
