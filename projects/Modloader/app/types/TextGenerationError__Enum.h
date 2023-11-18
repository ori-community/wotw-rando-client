#pragma once
#include <Modloader/app/structs/TextGenerationError__Enum.h>
#include <Modloader/app/structs/TextGenerationError__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextGenerationError__Enum {
        inline app::TextGenerationError__Enum__Class** type_info() {
            static app::TextGenerationError__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextGenerationError__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextGenerationError__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextGenerationError__Enum__Class>(type_info(), "UnityEngine", "TextGenerationError");
        }
        inline app::TextGenerationError__Enum* create() {
            return il2cpp::create_object<app::TextGenerationError__Enum>(get_class());
        }
    } // namespace TextGenerationError__Enum
} // namespace app::classes::types
