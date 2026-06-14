#pragma once
#include <Modloader/app/structs/UberAtlasExclusions.h>
#include <Modloader/app/structs/UberAtlasExclusions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberAtlasExclusions {
        inline app::UberAtlasExclusions__Class** type_info() {
            static app::UberAtlasExclusions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberAtlasExclusions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberAtlasExclusions__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasExclusions__Class>(type_info(), "", "UberAtlasExclusions");
        }
        inline app::UberAtlasExclusions* create() {
            return il2cpp::create_object<app::UberAtlasExclusions>(get_class());
        }
    } // namespace UberAtlasExclusions
} // namespace app::classes::types
