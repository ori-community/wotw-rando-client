#pragma once
#include <Modloader/app/structs/ValidateNames.h>
#include <Modloader/app/structs/ValidateNames__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValidateNames {
        inline app::ValidateNames__Class** type_info() {
            static app::ValidateNames__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValidateNames__Class**)(modloader::win::memory::resolve_rva(0x047099C8));
            }
            return cache;
        }
        inline app::ValidateNames__Class* get_class() {
            return il2cpp::get_class<app::ValidateNames__Class>(type_info(), "System.Xml", "ValidateNames");
        }
        inline app::ValidateNames* create() {
            return il2cpp::create_object<app::ValidateNames>(get_class());
        }
    } // namespace ValidateNames
} // namespace app::classes::types
