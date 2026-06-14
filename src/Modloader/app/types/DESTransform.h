#pragma once
#include <Modloader/app/structs/DESTransform.h>
#include <Modloader/app/structs/DESTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DESTransform {
        inline app::DESTransform__Class** type_info() {
            static app::DESTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DESTransform__Class**)(modloader::win::memory::resolve_rva(0x04739EB0));
            }
            return cache;
        }
        inline app::DESTransform__Class* get_class() {
            return il2cpp::get_class<app::DESTransform__Class>(type_info(), "System.Security.Cryptography", "DESTransform");
        }
        inline app::DESTransform* create() {
            return il2cpp::create_object<app::DESTransform>(get_class());
        }
    } // namespace DESTransform
} // namespace app::classes::types
