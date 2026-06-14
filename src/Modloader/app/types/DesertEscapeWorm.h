#pragma once
#include <Modloader/app/structs/DesertEscapeWorm.h>
#include <Modloader/app/structs/DesertEscapeWorm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesertEscapeWorm {
        inline app::DesertEscapeWorm__Class** type_info() {
            static app::DesertEscapeWorm__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesertEscapeWorm__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesertEscapeWorm__Class* get_class() {
            return il2cpp::get_class<app::DesertEscapeWorm__Class>(type_info(), "", "DesertEscapeWorm");
        }
        inline app::DesertEscapeWorm* create() {
            return il2cpp::create_object<app::DesertEscapeWorm>(get_class());
        }
    } // namespace DesertEscapeWorm
} // namespace app::classes::types
