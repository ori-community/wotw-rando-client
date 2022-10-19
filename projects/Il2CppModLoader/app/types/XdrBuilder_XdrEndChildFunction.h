#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrEndChildFunction {
        inline app::XdrBuilder_XdrEndChildFunction__Class** type_info = (app::XdrBuilder_XdrEndChildFunction__Class**)(modloader::win::memory::resolve_rva(0x04714808));
        inline app::XdrBuilder_XdrEndChildFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_XdrEndChildFunction__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "XdrEndChildFunction");
        }
        inline app::XdrBuilder_XdrEndChildFunction* create() {
            return il2cpp::create_object<app::XdrBuilder_XdrEndChildFunction>(get_class());
        }
    } // namespace XdrBuilder_XdrEndChildFunction
} // namespace app::classes::types
