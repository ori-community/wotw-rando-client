#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextGenerationError__Enum {
        namespace {
            inline app::TextGenerationError__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TextGenerationError__Enum__Class** type_info = &type_info_ref;
        inline app::TextGenerationError__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextGenerationError__Enum__Class>(type_info, "UnityEngine", "TextGenerationError");
        }
        inline app::TextGenerationError__Enum* create() {
            return il2cpp::create_object<app::TextGenerationError__Enum>(get_class());
        }
    } // namespace TextGenerationError__Enum
} // namespace app::classes::types
