#pragma once
#include <Modloader/app/structs/Datatype_duration.h>
#include <Modloader/app/structs/Datatype_duration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_duration {
        inline app::Datatype_duration__Class** type_info() {
            static app::Datatype_duration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_duration__Class**)(modloader::win::memory::resolve_rva(0x04729290));
            }
            return cache;
        }
        inline app::Datatype_duration__Class* get_class() {
            return il2cpp::get_class<app::Datatype_duration__Class>(type_info(), "System.Xml.Schema", "Datatype_duration");
        }
        inline app::Datatype_duration* create() {
            return il2cpp::create_object<app::Datatype_duration>(get_class());
        }
    } // namespace Datatype_duration
} // namespace app::classes::types
