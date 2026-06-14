#pragma once
#include <Modloader/app/structs/BaseProcessor.h>
#include <Modloader/app/structs/BaseProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseProcessor {
        inline app::BaseProcessor__Class** type_info() {
            static app::BaseProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseProcessor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseProcessor__Class* get_class() {
            return il2cpp::get_class<app::BaseProcessor__Class>(type_info(), "System.Xml.Schema", "BaseProcessor");
        }
        inline app::BaseProcessor* create() {
            return il2cpp::create_object<app::BaseProcessor>(get_class());
        }
    } // namespace BaseProcessor
} // namespace app::classes::types
