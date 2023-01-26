#pragma once
#include <Modloader/app/structs/TextGenerator.h>
#include <Modloader/app/structs/TextGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextGenerator {
        inline app::TextGenerator__Class** type_info() {
            static app::TextGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextGenerator__Class**)(modloader::win::memory::resolve_rva(0x04753120));
            }
            return cache;
        }
        inline app::TextGenerator__Class* get_class() {
            return il2cpp::get_class<app::TextGenerator__Class>(type_info(), "UnityEngine", "TextGenerator");
        }
        inline app::TextGenerator* create() {
            return il2cpp::create_object<app::TextGenerator>(get_class());
        }
    } // namespace TextGenerator
} // namespace app::classes::types
