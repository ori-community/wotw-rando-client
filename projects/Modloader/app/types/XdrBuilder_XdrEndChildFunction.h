#pragma once
#include <Modloader/app/structs/XdrBuilder_XdrEndChildFunction.h>
#include <Modloader/app/structs/XdrBuilder_XdrEndChildFunction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrEndChildFunction {
        inline app::XdrBuilder_XdrEndChildFunction__Class** type_info() {
            static app::XdrBuilder_XdrEndChildFunction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XdrBuilder_XdrEndChildFunction__Class**)(modloader::win::memory::resolve_rva(0x04714808));
            }
            return cache;
        }
        inline app::XdrBuilder_XdrEndChildFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_XdrEndChildFunction__Class>(type_info(), "System.Xml.Schema", "XdrBuilder", "XdrEndChildFunction");
        }
        inline app::XdrBuilder_XdrEndChildFunction* create() {
            return il2cpp::create_object<app::XdrBuilder_XdrEndChildFunction>(get_class());
        }
    } // namespace XdrBuilder_XdrEndChildFunction
} // namespace app::classes::types
