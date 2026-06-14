#pragma once
#include <Modloader/app/structs/AkTriangle.h>
#include <Modloader/app/structs/AkTriangle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkTriangle {
        inline app::AkTriangle__Class** type_info() {
            static app::AkTriangle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkTriangle__Class**)(modloader::win::memory::resolve_rva(0x0471F138));
            }
            return cache;
        }
        inline app::AkTriangle__Class* get_class() {
            return il2cpp::get_class<app::AkTriangle__Class>(type_info(), "", "AkTriangle");
        }
        inline app::AkTriangle* create() {
            return il2cpp::create_object<app::AkTriangle>(get_class());
        }
    } // namespace AkTriangle
} // namespace app::classes::types
