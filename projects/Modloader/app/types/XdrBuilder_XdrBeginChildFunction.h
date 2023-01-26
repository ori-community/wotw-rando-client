#pragma once
#include <Modloader/app/structs/XdrBuilder_XdrBeginChildFunction.h>
#include <Modloader/app/structs/XdrBuilder_XdrBeginChildFunction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrBeginChildFunction {
        inline app::XdrBuilder_XdrBeginChildFunction__Class** type_info() {
            static app::XdrBuilder_XdrBeginChildFunction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XdrBuilder_XdrBeginChildFunction__Class**)(modloader::win::memory::resolve_rva(0x04798BF8));
            }
            return cache;
        }
        inline app::XdrBuilder_XdrBeginChildFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_XdrBeginChildFunction__Class>(type_info(), "System.Xml.Schema", "XdrBuilder", "XdrBeginChildFunction");
        }
        inline app::XdrBuilder_XdrBeginChildFunction* create() {
            return il2cpp::create_object<app::XdrBuilder_XdrBeginChildFunction>(get_class());
        }
    } // namespace XdrBuilder_XdrBeginChildFunction
} // namespace app::classes::types
