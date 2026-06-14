#pragma once
#include <Modloader/app/structs/RedefineEntry.h>
#include <Modloader/app/structs/RedefineEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RedefineEntry {
        inline app::RedefineEntry__Class** type_info() {
            static app::RedefineEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RedefineEntry__Class**)(modloader::win::memory::resolve_rva(0x04709D98));
            }
            return cache;
        }
        inline app::RedefineEntry__Class* get_class() {
            return il2cpp::get_class<app::RedefineEntry__Class>(type_info(), "System.Xml.Schema", "RedefineEntry");
        }
        inline app::RedefineEntry* create() {
            return il2cpp::create_object<app::RedefineEntry>(get_class());
        }
    } // namespace RedefineEntry
} // namespace app::classes::types
