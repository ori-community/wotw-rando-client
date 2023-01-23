#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextClipping__Enum__Class.h>
#include <Modloader/app/structs/TextClipping__Enum.h>

namespace app::classes::types {
    namespace TextClipping__Enum {
        namespace {
            inline app::TextClipping__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TextClipping__Enum__Class** type_info = &type_info_ref;
        inline app::TextClipping__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextClipping__Enum__Class>(type_info, "UnityEngine", "TextClipping");
        }
        inline app::TextClipping__Enum* create() {
            return il2cpp::create_object<app::TextClipping__Enum>(get_class());
        }
    } // namespace TextClipping__Enum
} // namespace app::classes::types
