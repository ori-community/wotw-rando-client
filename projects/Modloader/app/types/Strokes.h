#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Strokes__Class.h>
#include <Modloader/app/structs/Strokes.h>

namespace app::classes::types {
    namespace Strokes {
        namespace {
            inline app::Strokes__Class* type_info_ref = nullptr;
        }
        inline app::Strokes__Class** type_info = &type_info_ref;
        inline app::Strokes__Class* get_class() {
            return il2cpp::get_class<app::Strokes__Class>(type_info, "Colorful", "Strokes");
        }
        inline app::Strokes* create() {
            return il2cpp::create_object<app::Strokes>(get_class());
        }
    } // namespace Strokes
} // namespace app::classes::types
