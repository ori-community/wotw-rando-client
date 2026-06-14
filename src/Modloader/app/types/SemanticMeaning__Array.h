#pragma once
#include <Modloader/app/structs/SemanticMeaning__Array.h>
#include <Modloader/app/structs/SemanticMeaning__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SemanticMeaning__Array {
        inline app::SemanticMeaning__Array__Class** type_info() {
            static app::SemanticMeaning__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SemanticMeaning__Array__Class**)(modloader::win::memory::resolve_rva(0x04747A10));
            }
            return cache;
        }
        inline app::SemanticMeaning__Array__Class* get_class() {
            return il2cpp::get_class<app::SemanticMeaning__Array__Class>(type_info(), "UnityEngine.Windows.Speech", "SemanticMeaning[]");
        }
        inline app::SemanticMeaning__Array* create() {
            return il2cpp::create_object<app::SemanticMeaning__Array>(get_class());
        }
    } // namespace SemanticMeaning__Array
} // namespace app::classes::types
