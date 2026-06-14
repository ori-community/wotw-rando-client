#pragma once
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry__Array.h>
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrAttributeEntry__Array {
        inline app::XdrBuilder_XdrAttributeEntry__Array__Class** type_info() {
            static app::XdrBuilder_XdrAttributeEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XdrBuilder_XdrAttributeEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x04787270));
            }
            return cache;
        }
        inline app::XdrBuilder_XdrAttributeEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::XdrBuilder_XdrAttributeEntry__Array__Class>(type_info(), "System.Xml.Schema", "XdrBuilder+XdrAttributeEntry[]");
        }
        inline app::XdrBuilder_XdrAttributeEntry__Array* create() {
            return il2cpp::create_object<app::XdrBuilder_XdrAttributeEntry__Array>(get_class());
        }
    } // namespace XdrBuilder_XdrAttributeEntry__Array
} // namespace app::classes::types
