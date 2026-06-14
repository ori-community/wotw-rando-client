#pragma once
#include <Modloader/app/structs/XSDSchema.h>
#include <Modloader/app/structs/XSDSchema__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XSDSchema {
        inline app::XSDSchema__Class** type_info() {
            static app::XSDSchema__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XSDSchema__Class**)(modloader::win::memory::resolve_rva(0x0476A1C8));
            }
            return cache;
        }
        inline app::XSDSchema__Class* get_class() {
            return il2cpp::get_class<app::XSDSchema__Class>(type_info(), "System.Data", "XSDSchema");
        }
        inline app::XSDSchema* create() {
            return il2cpp::create_object<app::XSDSchema>(get_class());
        }
    } // namespace XSDSchema
} // namespace app::classes::types
