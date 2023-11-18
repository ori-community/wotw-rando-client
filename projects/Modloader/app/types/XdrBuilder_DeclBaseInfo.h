#pragma once
#include <Modloader/app/structs/XdrBuilder_DeclBaseInfo.h>
#include <Modloader/app/structs/XdrBuilder_DeclBaseInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_DeclBaseInfo {
        inline app::XdrBuilder_DeclBaseInfo__Class** type_info() {
            static app::XdrBuilder_DeclBaseInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XdrBuilder_DeclBaseInfo__Class**)(modloader::win::memory::resolve_rva(0x04755620));
            }
            return cache;
        }
        inline app::XdrBuilder_DeclBaseInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_DeclBaseInfo__Class>(type_info(), "System.Xml.Schema", "XdrBuilder", "DeclBaseInfo");
        }
        inline app::XdrBuilder_DeclBaseInfo* create() {
            return il2cpp::create_object<app::XdrBuilder_DeclBaseInfo>(get_class());
        }
    } // namespace XdrBuilder_DeclBaseInfo
} // namespace app::classes::types
