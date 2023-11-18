#pragma once
#include <Modloader/app/structs/TripleDESTransform.h>
#include <Modloader/app/structs/TripleDESTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TripleDESTransform {
        inline app::TripleDESTransform__Class** type_info() {
            static app::TripleDESTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TripleDESTransform__Class**)(modloader::win::memory::resolve_rva(0x047969E8));
            }
            return cache;
        }
        inline app::TripleDESTransform__Class* get_class() {
            return il2cpp::get_class<app::TripleDESTransform__Class>(type_info(), "System.Security.Cryptography", "TripleDESTransform");
        }
        inline app::TripleDESTransform* create() {
            return il2cpp::create_object<app::TripleDESTransform>(get_class());
        }
    } // namespace TripleDESTransform
} // namespace app::classes::types
