#pragma once
#include <Modloader/app/structs/RuntimeGuidMapping.h>
#include <Modloader/app/structs/RuntimeGuidMapping__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeGuidMapping {
        inline app::RuntimeGuidMapping__Class** type_info() {
            static app::RuntimeGuidMapping__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeGuidMapping__Class**)(modloader::win::memory::resolve_rva(0x04700EF0));
            }
            return cache;
        }
        inline app::RuntimeGuidMapping__Class* get_class() {
            return il2cpp::get_class<app::RuntimeGuidMapping__Class>(type_info(), "", "RuntimeGuidMapping");
        }
        inline app::RuntimeGuidMapping* create() {
            return il2cpp::create_object<app::RuntimeGuidMapping>(get_class());
        }
    } // namespace RuntimeGuidMapping
} // namespace app::classes::types
