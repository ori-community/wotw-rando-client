#pragma once
#include <Modloader/app/structs/UnreferencedObjectEventArgs.h>
#include <Modloader/app/structs/UnreferencedObjectEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnreferencedObjectEventArgs {
        inline app::UnreferencedObjectEventArgs__Class** type_info() {
            static app::UnreferencedObjectEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnreferencedObjectEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04714588));
            }
            return cache;
        }
        inline app::UnreferencedObjectEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UnreferencedObjectEventArgs__Class>(type_info(), "System.Xml.Serialization", "UnreferencedObjectEventArgs");
        }
        inline app::UnreferencedObjectEventArgs* create() {
            return il2cpp::create_object<app::UnreferencedObjectEventArgs>(get_class());
        }
    } // namespace UnreferencedObjectEventArgs
} // namespace app::classes::types
