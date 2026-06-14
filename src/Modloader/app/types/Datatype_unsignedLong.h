#pragma once
#include <Modloader/app/structs/Datatype_unsignedLong.h>
#include <Modloader/app/structs/Datatype_unsignedLong__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_unsignedLong {
        inline app::Datatype_unsignedLong__Class** type_info() {
            static app::Datatype_unsignedLong__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_unsignedLong__Class**)(modloader::win::memory::resolve_rva(0x047921F0));
            }
            return cache;
        }
        inline app::Datatype_unsignedLong__Class* get_class() {
            return il2cpp::get_class<app::Datatype_unsignedLong__Class>(type_info(), "System.Xml.Schema", "Datatype_unsignedLong");
        }
        inline app::Datatype_unsignedLong* create() {
            return il2cpp::create_object<app::Datatype_unsignedLong>(get_class());
        }
    } // namespace Datatype_unsignedLong
} // namespace app::classes::types
